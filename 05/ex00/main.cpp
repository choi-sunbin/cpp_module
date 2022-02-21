/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 01:56:36 by sunbchoi          #+#    #+#             */
/*   Updated: 2022/02/22 02:37:19 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat temp("sunbchoi", 100);
	//Bureaucrat err_1("sunbchoi2", 0);
	//Bureaucrat err_2("sunbchoi3", 190);
	try
	{
		temp.increaseGrade(20);
		std::cout << temp << std::endl;
		temp.increaseGrade(100);
		std::cout << temp << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		temp.decreaseGrade(20);
		std::cout << temp << std::endl;
		temp.decreaseGrade(100);
		std::cout << temp << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}