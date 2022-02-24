/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 17:26:14 by sunbchoi          #+#    #+#             */
/*   Updated: 2022/02/25 02:52:38 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
: Form("", "", 0, 0)
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string const &target) 
: Form("PresidentialPardonForm", target, 72, 45)
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &other) : Form(other)
{
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &other)
{
	this->Form::operator=(other);
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

void PresidentialPardonForm::action(Bureaucrat const &executer) const
{
	this->Form::execute(executer);
	std::cout << "The " << this->getTarget() << " has been pardoned by " << executer.getName() << "." << std::endl;
}