/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 17:11:29 by sunbchoi          #+#    #+#             */
/*   Updated: 2022/02/21 23:18:16 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
private:
	int value;
	static const int bits = 8;
	
public:
	Fixed(void);
	Fixed(const int input);
	Fixed(const float input);
	Fixed(const Fixed &other);
	~Fixed();
	
	Fixed 	&operator=(const Fixed &other);
	// Comparison operator
	bool	operator>(const Fixed &other) const;
	bool	operator<(const Fixed &other) const;
	bool	operator>=(const Fixed &other) const;
	bool	operator<=(const Fixed &other) const;
	bool	operator==(const Fixed &other) const;
	bool	operator!=(const Fixed &other) const;
	// Arithmetic operators
	Fixed	operator+(const Fixed &other) const;
	Fixed	operator-(const Fixed &other) const;
	Fixed	operator*(const Fixed &other) const;
	Fixed	operator/(const Fixed &other) const;
	// Increment and decrement operators
	Fixed	&operator++(void);
	Fixed	operator++(int);
	Fixed	&operator--(void);
	Fixed	operator--(int);

	int 	getRawBits(void) const;
	void	setRawBits(const int raw);
	float	toFloat(void) const;
	int		toInt(void) const;

	static Fixed &min(Fixed &val1, Fixed &val2);
	static Fixed &max(Fixed &val1, Fixed &val2);
	static const Fixed &min(Fixed const & val1, Fixed const & val2);
	static const Fixed &max(const Fixed &val1, const Fixed &val2);
};

std::ostream&	operator<<(std::ostream& os, const Fixed& fixed);

#endif // FIXED_HPP
