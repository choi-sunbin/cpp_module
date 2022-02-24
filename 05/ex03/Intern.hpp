/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 03:11:37 by sunbchoi          #+#    #+#             */
/*   Updated: 2022/02/25 03:34:18 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include "Form.hpp"

class Intern
{
private:
public:
	Intern();
	Intern(Intern const &);
	Intern &operator=(Intern const &);
	~Intern();

	Form *makeForm(std::string const &formName, std::string const &target);

	class NotKnownFormException : public std::exception
	{
	public:
		const char *what() const throw()
		{
			return ("Intern : Requested form is not known");
		}
	};
};

#endif // INTERN_HPP