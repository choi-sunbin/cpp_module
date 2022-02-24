/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 03:12:35 by sunbchoi          #+#    #+#             */
/*   Updated: 2022/02/25 03:37:38 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern()
{
}

Intern::Intern(Intern const &)
{
}

Intern &Intern::operator=(Intern const &)
{
	return (*this);
}

Intern::~Intern()
{
}

Form *Intern::makeForm(std::string const &formName, std::string const &target)
{
	int loop;
	int selected;
	
	selected = -1;
	const std::string formNames[3] = {
		"ShrubberyCreationForm",
		"RobotomyRequestForm",
		"PresidentialPardonForm"};

	Form (*forms[3]) = {
		new ShrubberyCreationForm(target),
		new RobotomyRequestForm(target),
		new PresidentialPardonForm(target)};

	for (loop = 0; loop < 3; loop++)
	{
		if (formName == formNames[loop])
		{
			selected = loop;
			std::cout << "Intern creates " << formName << std::endl;
		}
		else
			delete forms[loop];
	}
	if (selected != -1)
		return (forms[selected]);
	throw Intern::NotKnownFormException();
}