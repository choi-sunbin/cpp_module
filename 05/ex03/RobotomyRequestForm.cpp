/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 17:26:19 by sunbchoi          #+#    #+#             */
/*   Updated: 2022/02/25 03:44:18 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <ctime>
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
: Form("", "", 0, 0)
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) : Form("RobotomyRequestForm", target, 72, 45)
{
	srand(time(NULL));
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &other) : Form(other)
{
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &other)
{
	this->Form::operator=(other);
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

void RobotomyRequestForm::action(Bureaucrat const &executer) const
{
	this->Form::execute(executer);
	if (std::rand() % 2 == 0)
		std::cout << this->getTarget() << " has been robotomized successfully!\n";
	else
		std::cout << this->getTarget() << " failed to robotomized!\n";
}