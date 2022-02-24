/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 01:56:33 by sunbchoi          #+#    #+#             */
/*   Updated: 2022/02/24 17:00:15 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>

# define MAX_HIGH_GRADE 1
# define MAX_LOW_GRADE 150

class Form;

class Bureaucrat
{
	public:
		Bureaucrat(std::string const &Name, int const &grade);
		Bureaucrat(Bureaucrat &other);
		Bureaucrat& operator=(Bureaucrat const &other);
		~Bureaucrat();
		
		std::string getName() const;
		int getGrade() const;
		void increaseGrade(int amount);
		void decreaseGrade(int amount);
		void signForm(Form &form);
		void executeForm(Form &form);
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
		std::string const name;
		int grade;
};
std::ostream &operator<<(std::ostream &os, Bureaucrat const &bureaucrat);

#endif