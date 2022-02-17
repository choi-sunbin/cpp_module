/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 16:22:53 by sunbchoi          #+#    #+#             */
/*   Updated: 2022/02/09 17:37:09 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon &weapon )
	:name(name)
	,weapon(weapon)
{
}

HumanA::~HumanA(void)
{
}

void HumanA::attack()
{	
	std::cout << this->name \
	<< "is attacks zombies with " \
	<< this->getWeapon().getType() << std::endl;
}

Weapon& HumanA::getWeapon(void)
{
	return (this->weapon);
}