/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 16:34:03 by sunbchoi          #+#    #+#             */
/*   Updated: 2022/02/19 17:14:11 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"

Weapon::Weapon(std::string type)
	: type(type)
{
}

Weapon::~Weapon(void)
{
}

const std::string&	Weapon::getType(void) const
{
	return (this->type);
}

bool		Weapon::setType(const std::string &newType)
{
	if (newType.length() == 0)
	{
		std::cout << "New type Weapon is Empty" << std::endl;
		std::cout << "Settting Fail" << std::endl;
		return (false);
	}
	this->type = newType;
	return (true);
}
