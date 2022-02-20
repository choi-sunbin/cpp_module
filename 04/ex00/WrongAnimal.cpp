/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 13:38:08 by sunbchoi          #+#    #+#             */
/*   Updated: 2022/02/20 13:39:15 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
	std::cout << "< WrongAnimal > Default consturctor" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) : type(other.getType())
{
	std::cout << "< WrongAnimal > Copy consturctor" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
	this->type = other.getType();
	std::cout << "< WrongAnimal > Assigned" << std::endl;
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "< WrongAnimal > Destructor" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return this->type;
}

void WrongAnimal::makeSound() const
{
	std::cout << "< WrongAnimal SOUND >" << std::endl;
}