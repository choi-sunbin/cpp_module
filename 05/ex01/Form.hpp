/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 02:39:50 by sunbchoi          #+#    #+#             */
/*   Updated: 2022/02/22 03:45:55 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>

class Bureaucrat;

class Form
{
	private:
		const std::string name;
		bool sign;
		const int reqSignGrade;
		const int reqExecGrade;
	public:
		Form(std::string const &name, int reqSignGrade, int reqExecGrade);
		Form(Form const &other);
		virtual ~Form();

		std::string getName() const;
		bool getSign() const;
		int getSignGrade() const;
		int getExecGrade() const;

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
};

std::ostream &operator<<(std::ostream &os, Form const &form);
#endif