/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 01:56:33 by sunbchoi          #+#    #+#             */
/*   Updated: 2022/02/22 03:47:01 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
//# include "Form.hpp"

# define MAX_HIGH_GRADE 1
# define MAX_LOW_GRADE 150

class Form;

class Bureaucrat
{
	public:
		Bureaucrat(const std::string &Name, const int &grade);
		Bureaucrat(Bureaucrat &other);
		~Bureaucrat();
		Bureaucrat& operator=(const Bureaucrat &other);
		std::string getName() const;
		int getGrade() const;
		void increaseGrade(int amount);
		void decreaseGrade(int amount);
		void signForm(Form &form);
		class GradeTooHighException : public std::exception{
			const char *what() const throw()
			{
				return ("Exception[BUREAUCRAT] : Grade Too High!");
			}
		};
		class GradeTooLowException : public std::exception{
			const char *what() const throw()
			{
				return ("Exception[BUREAUCRAT] : Grade Too LOW!");
			}
        };
	private:
		Bureaucrat(void);
		int grade;
		const std::string name;
};
std::ostream &operator<<(std::ostream &os, Bureaucrat const &bureaucrat);

#endif