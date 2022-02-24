/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 02:39:49 by sunbchoi          #+#    #+#             */
/*   Updated: 2022/02/25 02:33:48 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form()
: name(""), target(""), sign(false)
, reqSignGrade(0)
, reqExecGrade(0)
{
	if (reqSignGrade < MAX_HIGH_GRADE)
		throw Form::GradeTooHighException();
	if (reqSignGrade > MAX_LOW_GRADE)
		throw Form::GradeTooLowException();
	if (reqExecGrade < MAX_HIGH_GRADE)
		throw Form::GradeTooHighException();
	if (reqExecGrade > MAX_LOW_GRADE)
		throw Form::GradeTooLowException();
} 

Form::Form(std::string const &name, std::string const &target,int reqSignGrade, int reqExecGrade) 
: name(name), target(target)
, sign(false)
, reqSignGrade(reqSignGrade)
, reqExecGrade(reqExecGrade)
{
	if (reqSignGrade < MAX_HIGH_GRADE)
		throw Form::GradeTooHighException();
	if (reqSignGrade > MAX_LOW_GRADE)
		throw Form::GradeTooLowException();
	if (reqExecGrade < MAX_HIGH_GRADE)
		throw Form::GradeTooHighException();
	if (reqExecGrade > MAX_LOW_GRADE)
		throw Form::GradeTooLowException();
}

Form::Form(Form const &other) 
: name(other.getName()), reqSignGrade(other.getSignGrade()) 
, reqExecGrade(other.getExecGrade())
{
	this->sign = other.sign;
}

Form &Form::operator=(Form const &other)
{
	this->sign = other.sign;
	return (*this);
}

Form::~Form()
{
}

void Form::beSigned(Bureaucrat const &bureaucrat)
{
	if (bureaucrat.getGrade() > this->reqSignGrade)
		throw Form::GradeTooHighException();
	this->sign = true;
}

std::string Form::getName() const
{
	return (this->name);
}

std::string Form::getTarget() const
{
	return (this->target);
}

bool Form::getSign() const
{
	return (this->sign);
}

int Form::getSignGrade() const
{
	return (this->reqSignGrade);
}

int Form::getExecGrade() const
{
	return (this->reqExecGrade);
}

void Form::execute(Bureaucrat const &executor) const
{
	if (this->getSign() == false)
		throw Form::NotSignedException();
	if (executor.getGrade() > this->getExecGrade())
		throw Form::GradeTooLowException();
}

std::ostream &operator<<(std::ostream &os, Form const &form)
{
	os << "NAME [" << form.getName() << "] SIGN_G [" << form.getSignGrade() << "] EXEC_G [" << form.getExecGrade();
	if (form.getSign())
		os << "] SIGNED[O]";
	else
		os << "] NOT SIGNED[X]";
	return (os);
}