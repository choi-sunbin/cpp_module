/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 02:49:39 by sunbchoi          #+#    #+#             */
/*   Updated: 2022/02/20 01:33:24 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
: value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called" << std::endl;
	value = other.getRawBits();
}

// 고정 소수점 소숫점->문제 8비트 명시 
// 정수N -> 고정소수값
// N << 8
// N * 256

Fixed::Fixed(const int input)
{
	std::cout << "Int constructor called" << std::endl;
	value = input << bits;
}

//roundf -> 플롯형의 반올림 함수
Fixed::Fixed(const float input)
{
	std::cout << "Float constructor called" << std::endl;
	value = roundf(input * (1 << bits));
}


Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "Assignment operator called" << std::endl;
	value = other.value;
	return (*this);
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits called" << std::endl;
	return (this->value);
}

void Fixed::setRawBits(int raw)
{
	std::cout << "setRawBits called" << std::endl;
	this->value = raw;
}

//고정소수값 -> 정수값
//fixed_point_number >> 8
//fixed_point_number / 256

// 고정소수값 -> 실수
// (float)fixed_point_number / (1 << 8)
// (float)(fixed_point_number / 256)

float			Fixed::toFloat(void) const
{
	return (float(value) / float(1 << bits));
}

int				Fixed::toInt(void) const
{
	return (value >> bits);
}

//헤더에 << 연산자 오버로딩. 고정 소수값의 실수형 표현을 출력하기 위해사용.
std::ostream&	operator<<(std::ostream& os, const Fixed& fixed)
{
	return (os << fixed.toFloat());
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

//https://velog.io/@chaewonkang/42-Seoul-CPP-Module-02 고정소숫점 설명