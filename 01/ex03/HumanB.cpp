/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 16:23:00 by sunbchoi          #+#    #+#             */
/*   Updated: 2022/02/11 15:30:51 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name)
	:name(name)
	,weapon(NULL)
{
}

HumanB::~HumanB(void)
{
}

void HumanB::attack()
{
	if (this->weapon == NULL)
		std::cout << this->name << " has nothing" << std::endl;
	else 
	{
		std::cout << this->name \
		<< " is attacks zombies with " \
		<< this->getWeapon().getType() << std::endl;
	}
}

Weapon& HumanB::getWeapon(void)
{
	return (*(this->weapon));
}

bool	HumanB::setWeapon( Weapon& newWeapon )
{
	if (newWeapon.getType() == "")
		return (false);
	this->weapon = &newWeapon;
	return (true);
}
