/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 01:56:36 by sunbchoi          #+#    #+#             */
/*   Updated: 2022/02/22 03:48:57 by sunbchoi         ###   ########.fr       */
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

	temp.signForm(formA);
	temp.decreaseGrade(10);
	temp.signForm(formB);
	std::cout << formA << std::endl;
	std::cout << formB << std::endl;
	return 0;
}