/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 13:37:08 by sunbchoi          #+#    #+#             */
/*   Updated: 2022/02/20 13:37:09 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	this->type = "Cat";
	std::cout << "< Cat > Default consturctor" << std::endl;
}

Cat::Cat(const Animal &obj) : Animal()
{
	this->type = obj.getType();
	std::cout << "< Cat > Copy consturctor" << std::endl;
}

Cat &Cat::operator=(const Animal &obj)
{
	this->type = obj.getType();
	std::cout << "< Cat > Copy Assigned" << std::endl;
	return *this;
}

Cat::~Cat()
{
	std::cout << "< Cat > Copy Destructed" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "< Cat > Mewo" << std::endl;
}