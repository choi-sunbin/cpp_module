/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 01:56:36 by sunbchoi          #+#    #+#             */
/*   Updated: 2022/02/25 03:49:36 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	Bureaucrat temp("sunbchoi", 100);
	//Bureaucrat err_1("sunbchoi2", 0);
	//Bureaucrat err_2("sunbchoi3", 190);
	Form formA("a", 105, 105);
	Form formB("b", 100, 100);
	Form formC("c", 105, 105);
	Form formD("d", 100, 100);

	temp.signForm(formA);
	temp.signForm(formB);
	temp.decreaseGrade(10);
	temp.signForm(formC);
	temp.signForm(formD);
	
	std::cout << formA << std::endl;
	std::cout << formB << std::endl;
	std::cout << formC << std::endl;
	std::cout << formD << std::endl;
	return 0;
}