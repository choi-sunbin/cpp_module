/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 04:04:16 by sunbchoi          #+#    #+#             */
/*   Updated: 2022/02/26 04:13:36 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <string>

template <typename T>
class Array
{
private:
	unsigned int _size;
	T *array;

public:
	Array<T>():_size(0), array()
	{
	};
	Array<T>(unsigned int _size) : _size(_size)
	{
		this->array = new T[_size];
		this->_size = _size;
	};
	Array<T>(const Array &other)
	{
		this->array = new T[other.size()];
		for (unsigned int i = 0; i < other.size(); i++)
			this->array[i] = other[i];
	};

	Array<T> &operator=(const Array &other)
	{
		unsigned int loop;
	
		if (this == &other)
			return (*this);
		if (this->_size > 0)
			delete [] this->array;
		this->_size = other._size;
		this->array = new T[other._size];
		loop = 0;
		while (loop < other._size)
		{
			this->array[loop] = other[loop];
			loop++;
		}
		return *this;
	};
	~Array()
	{
		delete[] this->array;
	};

	T &operator[](int index) const
	{
		if (index < 0 || index >= static_cast<int>(this->_size))
			throw Array::OutOfRangeException();
		return this->array[index];
	};

	T *getArray() const
	{
		return this->array;
	};

	unsigned int size() const
	{
		return this->_size;
	}

	class OutOfRangeException : public std::exception
	{
		virtual const char *what() const throw()
		{
			return "Out of range";
		}
	};
};

#endif
