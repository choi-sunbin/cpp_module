/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 14:50:45 by sunbchoi          #+#    #+#             */
/*   Updated: 2022/02/25 15:56:59 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_HPP
# define SCALAR_HPP

# include <iostream>
# include <string>

class Scalar
{
private:
	std::string value;
	Scalar();

public:
	Scalar(std::string const &value);
	~Scalar(){};
	Scalar& operator=(Scalar const &other);	
	std::string const &getValue() const;
	char toChar() const;
	int toInt() const;
	float toFloat() const;
	double toDouble() const;

	class ImpossibleException : public std::exception
	{
		const char *what() const throw()
		{
			return "impossible";
		}
	};
	class NonDisplayableException : public std::exception
	{
		const char *what() const throw()
		{
			return "Non displayable";
		}
	};
};

std::ostream &operator<<(std::ostream &os, Scalar const &scalar);

#endif