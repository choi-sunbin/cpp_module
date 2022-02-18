/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 17:11:29 by sunbchoi          #+#    #+#             */
/*   Updated: 2022/02/18 01:22:53 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

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

	Fixed 	&operator=(const Fixed &other);

	int 	getRawBits(void) const;
	void	setRawBits(const int raw);
	float	toFloat(void) const;
	int		toInt(void) const;

	~Fixed();
};

std::ostream&	operator<<(std::ostream& os, const Fixed& fixed);

#endif // FIXED_HPP
