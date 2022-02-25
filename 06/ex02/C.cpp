/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 16:35:20 by sunbchoi          #+#    #+#             */
/*   Updated: 2022/02/25 17:06:00 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "C.hpp"

C::C( void )
{
	std::cout << "Default constructor for C called" << std::endl;
	return;
}

C::C( C const & src )
{
	std::cout << "Copy constructor for C called" << std::endl;
	*this = src;
	return;
}

C::~C( void )
{
	std::cout << "Destructor called for C called" << std::endl;
	return;
}

C &C::operator=( C const & )
{
	std::cout << "Assignement operator for C called" << std::endl;
	return *this;
}

std::ostream &	operator<<( std::ostream & os, C const & )
{
	os << "No value for C" << std::endl;
	return os;
}