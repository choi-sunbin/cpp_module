/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 02:49:39 by sunbchoi          #+#    #+#             */
/*   Updated: 2022/02/21 23:21:21 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Constructor
Fixed::Fixed(void) : value(0)
{
}

Fixed::Fixed(const Fixed &other)
{
	*this = other;
}

Fixed::Fixed(const int input) 
	: value(input << bits) 
{
}

Fixed::Fixed(const float input) 
	: value(roundf(input * (1 << bits)))
{
}

Fixed::~Fixed(void)
{
}

Fixed 	&Fixed::operator=(const Fixed &other)
{
	this->value = other.value;
	return (*this);
}

int		Fixed::getRawBits(void) const
{
	return (this->value);
}

void 	Fixed::setRawBits(int raw)
{
	this->value = raw;
}

float	Fixed::toFloat(void) const
{
	return (float(value) / float(1 << bits));
}

int		Fixed::toInt(void) const
{
	return (value >> bits);
}

// Comparison operator
bool Fixed::operator<(const Fixed &other) const
{
	return (this->value < other.value);
}
bool Fixed::operator>(const Fixed &other) const 
{
	return (this->value > other.value);
}
bool Fixed::operator<=(const Fixed &other) const
{
	return (this->value <= other.value);
}
bool Fixed::operator>=(const Fixed &other) const
{
	return (this->value >= other.value);
}
bool Fixed::operator==(const Fixed &other) const
{
	return (this->value == other.value);
}
bool Fixed::operator!=(const Fixed &other) const
{
	return (this->value != other.value);
}

Fixed Fixed::operator+(const Fixed &other) const
{
	Fixed result;

	result.setRawBits(this->value + other.value);
	return (result);
}

Fixed Fixed::operator-(const Fixed &other) const
{
	Fixed result;

	result.setRawBits(this->value - other.value);
	return (result);
}

Fixed Fixed::operator*(const Fixed &other) const
{
	Fixed result;

	result.setRawBits(this->value * other.value / (1 << this->bits));
	return (result);
}

Fixed Fixed::operator/(const Fixed &other) const
{
	Fixed result;

	result.setRawBits(this->value / other.value * (1 << this->bits));
	return (result);
}

// Increment and decrement operators

Fixed &Fixed::operator++(void)
{
	this->value += 1;
	return (*this);
}

Fixed &Fixed::operator--(void)
{
	this->value -= 1;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed ret(*this);

	this->value += 1;
	return (ret);
}

Fixed Fixed::operator--(int)
{
	Fixed ret(*this);

	this->value -= 1;
	return (ret);
}

Fixed &Fixed::min(Fixed &val1, Fixed & val2)
{
	if (val1 < val2)
		return (val1);
	return (val2);
}

Fixed &Fixed::max(Fixed &val1, Fixed &val2)
{
	if (val1 > val2)
		return (val1);
	return (val2);
}

const Fixed &Fixed::min(const Fixed &val1, const Fixed &val2)
{
	if ((Fixed)val1 < (Fixed)val2)
		return (val1);
	return (val2);
}

Fixed const &Fixed::max(Fixed const &val1, Fixed const &val2)
{
	if (val1 > val2)
		return (val1);
	return (val2);
}

//헤더에 << 연산자 오버로딩. 고정 소수값의 실수형 표현을 출력하기 위해사용.
std::ostream&	operator<<(std::ostream& os, const Fixed& fixed)
{
	return (os << fixed.toFloat());
}