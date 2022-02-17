/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 02:48:09 by sunbchoi          #+#    #+#             */
/*   Updated: 2022/02/17 02:49:53 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
	Fixed::setVerbose(true);
	Fixed a;
	std::cout << a.getRawBits() << std::endl;

	a.setRawBits(21);
	std::cout << a.getRawBits() << std::endl;

	Fixed b( a );
	std::cout << b.getRawBits() << std::endl;

	b.setRawBits(42);
	Fixed c;
	c = b;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;

	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	return 0;
}

