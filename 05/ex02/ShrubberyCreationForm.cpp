/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 17:26:24 by sunbchoi          #+#    #+#             */
/*   Updated: 2022/02/25 02:52:57 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
: Form("", "", 0, 0)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target) : Form("ShrubberyCreationForm", target, 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &other) : Form(other)
{
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &other)
{
	this->Form::operator=(other);
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

void ShrubberyCreationForm::action(Bureaucrat const &executer) const
{
	this->Form::execute(executer);
	std::ofstream file(this->getTarget() + "_shrubbery");

	if (file.is_open() == false)
		throw std::ofstream::failure("Could not open file " + this->getTarget() + "_shrubbery");
	file << TREE_ASCII_ART;
}