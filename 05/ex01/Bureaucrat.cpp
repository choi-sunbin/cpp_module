/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 01:56:30 by sunbchoi          #+#    #+#             */
/*   Updated: 2022/02/24 14:30:41 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat()
: name(""), grade(0)
{
}

Bureaucrat::Bureaucrat(std::string const &Name, int const &grade)
: name(Name)
{
	if (grade < MAX_HIGH_GRADE)
		throw Bureaucrat::GradeTooHighException();
	if (grade > MAX_LOW_GRADE)
		throw Bureaucrat::GradeTooLowException();
	this->grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat &other)
: name(other.name)
{
	this->grade = other.grade;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &other)
{
	this->grade = other.grade;
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
}

std::string Bureaucrat::getName() const
{
	return (this->name);
}

int Bureaucrat::getGrade() const
{
	return (this->grade);
}

void Bureaucrat::increaseGrade(int amount)
{
	if (this->grade - amount < MAX_HIGH_GRADE)
		throw Bureaucrat::GradeTooHighException();
	if (this->grade - amount > MAX_LOW_GRADE)
		throw Bureaucrat::GradeTooLowException();
	this->grade -= amount;
}

void Bureaucrat::decreaseGrade(int amount)
{
	if (this->grade + amount < MAX_HIGH_GRADE)
		throw Bureaucrat::GradeTooHighException();
	if (this->grade + amount > MAX_LOW_GRADE)
		throw Bureaucrat::GradeTooLowException();
	this->grade += amount;
}

void Bureaucrat::signForm(Form &form)
{
	try
	{
		form.beSigned(*this);
		std::cout << *this << " signs " << form << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << *this << " cannot sign " << form << " because "<< e.what() << std::endl;
	}
}

std::ostream &operator<<(std::ostream &os, Bureaucrat const &bureaucrat)
{
	os << "NAME ["<< bureaucrat.getName() << "] GRADE [" << bureaucrat.getGrade() << "]";
	return (os);
}