/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 16:34:12 by sunbchoi          #+#    #+#             */
/*   Updated: 2022/02/20 01:17:57 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <string>
# include <iostream>

class Weapon
{
	public:
		Weapon(std::string type);
		~Weapon(void);
		const	std::string	&getType() const;
		bool	setType(const std::string &newType);

	private:
		std::string type;
};

#endif