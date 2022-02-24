/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 02:39:50 by sunbchoi          #+#    #+#             */
/*   Updated: 2022/02/25 02:30:52 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
#include <fstream>

class Bureaucrat;

class Form
{
	private:
		Form();
		const std::string name;
		const std::string target;
		bool sign;
		const int reqSignGrade;
		const int reqExecGrade;
	public:
		Form(std::string const &name, std::string const &target, int reqSignGrade, int reqExecGrade);
		Form(Form const &other);
		Form &operator=(Form const &other);
		virtual ~Form();

		std::string getName() const;
		std::string getTarget() const;
		bool getSign() const;
		int getSignGrade() const;
		int getExecGrade() const;
		void execute(Bureaucrat const &executor) const;
		virtual void action(Bureaucrat const &executor) const = 0;	
		void beSigned(Bureaucrat const &bureaucrat);

		class GradeTooHighException : public std::exception
		{
			const char *what() const throw()
			{
				return ("Exception[FORM] : Grade Too High!");
			}
		};
		
		class GradeTooLowException : public std::exception
		{
			const char *what() const throw()
			{
				return ("Exception[FORM] : Grade Too LOW!");
			}
		};

		class NotSignedException : public std::exception
		{
			const char *what() const throw()
			{
				return ("Exception[FORM] : Form Not signed!");
			}
		};
};

std::ostream &operator<<(std::ostream &os, Form const &form);
#endif