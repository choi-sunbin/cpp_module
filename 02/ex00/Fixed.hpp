/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 17:11:29 by sunbchoi          #+#    #+#             */
/*   Updated: 2022/02/18 00:45:15 by sunbchoi         ###   ########.fr       */
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
	Fixed(const Fixed &other);

	Fixed 	&operator=(const Fixed &other);

	int 	getRawBits(void) const;
	void	setRawBits(const int raw);
	
	~Fixed();
};

#endif // FIXED_HPP
