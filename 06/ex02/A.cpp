/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 16:27:54 by sunbchoi          #+#    #+#             */
/*   Updated: 2022/02/25 17:06:13 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"

A::A( void )
{
	std::cout << "Default constructor for A called" << std::endl;
	return;
}

A::A( A const & src )
{
	std::cout << "Copy constructor for A called" << std::endl;
	*this = src;
	return;
}

A::~A( void )
{
	std::cout << "Destructor called for A called" << std::endl;
	return;
}

A &A::operator=( A const & )
{
	std::cout << "Assignement operator for A called" << std::endl;
	return *this;
}

std::ostream &	operator<<( std::ostream & os, A const & )
{
	os << "No value for A" << std::endl;
	return os;
}