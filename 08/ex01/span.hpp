/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 13:21:27 by sunbchoi          #+#    #+#             */
/*   Updated: 2022/02/27 15:05:38 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>
# include <string>
# include <iostream>
# include <algorithm>

class Span
{
public:
	Span();
	Span(unsigned int size);
	Span(Span const &other);
	Span &operator=(Span const &other);
	~Span();

	unsigned int size() const;
	std::vector<int> const &getValues() const;

	void addNumber(int n);
	void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
	long long shortestSpan() const;
	long long longestSpan() const;

	class OutOfRangeException : public std::exception
	{
	public:
		const char *what() const throw()
		{
			return ("Out of range");
		}
	};
	class FullException : public std::exception
	{
	public:
		const char *what() const throw()
		{
			return ("Buffer is already full");
		}
	};
	class CantSearchException : public std::exception
	{
	public:
		const char *what() const throw()
		{
			return ("Can't search");
		}
	};
private:
	unsigned int _size;
	std::vector<int> vec_int;
};

#endif
