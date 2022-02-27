/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 14:42:47 by sunbchoi          #+#    #+#             */
/*   Updated: 2022/02/27 15:05:34 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span()
{
	_size = 0;
};

Span::Span(unsigned int n)
{
	_size = n;
}

Span::Span(Span const &other)
{
	_size = other.size();
	vec_int = other.getValues();
}

Span &Span::operator=(Span const &other)
{
	if (this != &other)
	{
		_size = other.size();
		vec_int = other.getValues();
	}
	return *this;
}

Span::~Span()
{
}

unsigned int Span::size() const
{
	// return vec_int.size();
	return _size;
}

std::vector<int> const &Span::getValues() const
{
	return vec_int;
}

void Span::addNumber(int n)
{
	if (vec_int.size() >= _size)
		throw Span::FullException();
	vec_int.push_back(n);
}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	int size = std::distance(begin, end);
	if (size > static_cast<int>(_size))
		throw Span::FullException();
	std::copy(begin, end, std::back_inserter(vec_int));
}

long long Span::shortestSpan() const
{
	if (vec_int.size() < 2)
		throw Span::CantSearchException();
	std::vector<int> copy = vec_int;
	std::sort(copy.begin(), copy.end());

	std::vector<int>::iterator cur_it = copy.begin();
	std::vector<int>::iterator next_it = cur_it + 1;
	long long minSpan;
	long long temp;
	while (next_it != copy.end())
	{
		temp = static_cast<long long>(*next_it) - \
			static_cast<long long>(*cur_it);
		if (temp < minSpan)
			minSpan = temp;
		cur_it = next_it;
		next_it++;
	}
	return (minSpan);
}

long long Span::longestSpan() const
{
	long long ret;

	if (vec_int.size() < 2)
		throw Span::CantSearchException();
	std::vector<int> copy = vec_int;
	std::sort(copy.begin(), copy.end());
	ret = static_cast<long long>(copy.back()) - \
		static_cast<long long>(copy.front());
	return (ret);
}
