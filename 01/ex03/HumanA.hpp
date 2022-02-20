/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 16:22:55 by sunbchoi          #+#    #+#             */
/*   Updated: 2022/02/20 01:15:06 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA
{

public:

	HumanA(std::string name, Weapon &weapon);
	~HumanA(void);
	void	attack(void);
	Weapon&	getWeapon(void) const;

private:
	std::string	name;
	Weapon		&weapon;
};