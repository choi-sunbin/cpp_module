/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 01:56:36 by sunbchoi          #+#    #+#             */
/*   Updated: 2022/02/25 02:59:15 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

void test_form(Form &form, Bureaucrat &correct, Bureaucrat &wrong)
{
	std::cout << "-------------------------------" << std::endl;
	std::cout << "--------WRONG GRADE------------" << std::endl;
	std::cout << "-------------------------------" << std::endl << std::endl;
	wrong.signForm(form);
	wrong.executeForm(form);
	std::cout << "-------------------------------" << std::endl;
	std::cout << "-----------NOT SIGN------------" << std::endl;
	std::cout << "-------------------------------" << std::endl << std::endl;
	correct.executeForm(form);
	std::cout << "-------------------------------" << std::endl;
	std::cout << "-----------SUCCESS------------" << std::endl;
	std::cout << "-------------------------------" << std::endl << std::endl;
	correct.signForm(form);
	correct.executeForm(form);
	// correct.executeForm(form);
	// correct.executeForm(form);
	std::cout << "-------------------------------" << std::endl << std::endl;
}

int main()
{
	srand(time(NULL));

	Bureaucrat sunbcoi("sunbcoi", 1);
	Bureaucrat wrong("wrong", 150);

	ShrubberyCreationForm Shrubbery_form("Shrubbery");
	RobotomyRequestForm Robotomy_form("Robotomy");
	PresidentialPardonForm Presidential_form("Presidential");
	test_form(Shrubbery_form, sunbcoi, wrong);
	test_form(Robotomy_form, sunbcoi, wrong);
	test_form(Presidential_form, sunbcoi, wrong);

	return 0;
}