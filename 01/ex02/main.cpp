/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 15:51:43 by sunbchoi          #+#    #+#             */
/*   Updated: 2022/02/09 15:56:40 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int		main( void )
{
	//원본
	std::string	origin_str = "HI THIS IS BRAIN";
	//string 포인터
	std::string *stringPTR = &origin_str;
	//string 참조
	std::string	&stringREF = origin_str;

	std::cout << "START PRINT ADDRESS" << std::endl;
	std::cout << "ORIGIN	: " << &origin_str << std::endl;
	std::cout << "stringPTR	: " << &(*stringPTR) << std::endl;
	std::cout << "stringREF	: " << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "START PRINT STRING" << std::endl;	
	std::cout << "ORIGIN	: " << origin_str << std::endl;
	std::cout << "stringPTR	: " << *stringPTR << std::endl;
	std::cout << "stringREF	: " << stringREF << std::endl;
}