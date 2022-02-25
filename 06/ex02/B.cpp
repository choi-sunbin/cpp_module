/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 16:33:14 by sunbchoi          #+#    #+#             */
/*   Updated: 2022/02/25 17:06:04 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "B.hpp"

B::B( void )
{
	std::cout << "Default constructor for B called" << std::endl;
	return;
}

B::B( B const & src )
{
	std::cout << "Copy constructor for B called" << std::endl;
	*this = src;
	return;
}

B::~B( void )
{
	std::cout << "Destructor called for B called" << std::endl;
	return;
}

B &B::operator=( B const & )
{
	std::cout << "Assignement operator for B called" << std::endl;
	return *this;
}

std::ostream &	operator<<( std::ostream & os, B const & )
{
	os << "No value for B" << std::endl;
	return os;
}