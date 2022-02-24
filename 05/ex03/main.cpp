/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 01:56:36 by sunbchoi          #+#    #+#             */
/*   Updated: 2022/02/25 03:41:41 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include  "Intern.hpp"

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

	Bureaucrat sunbchoi("sunbchoi", 1);
	Bureaucrat wrong("wrong", 150);
	Intern intern;

	Form *form;

	form = intern.makeForm("ShrubberyCreationForm", "Shrubbery");
	test_form(*form, sunbchoi, wrong);
	delete form;
	
	form = intern.makeForm("RobotomyRequestForm", "Robotomy");
	test_form(*form, sunbchoi, wrong);
	delete form;
	
	form = intern.makeForm("PresidentialPardonForm", "Presidential");
	test_form(*form, sunbchoi, wrong);
	delete form;

	try
	{
		form = intern.makeForm("WrongName", "Wrong");
		test_form(*form, sunbchoi, wrong);
		delete form;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	system("leaks a.out");
	return 0;
}