/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 13:37:08 by sunbchoi          #+#    #+#             */
/*   Updated: 2022/02/21 19:13:41 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	this->type = "Cat";
	this->brain = new Brain();
	std::cout << "< Cat > Default consturctor" << std::endl;
}

Cat::Cat(const Cat &other) : Animal()
{
	this->type = other.getType();
	this->brain = new Brain(*other.getBrain());
	std::cout << "< Cat > Copy consturctor" << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
	this->type = other.getType();
	*brain = *(other.getBrain());
	
	std::cout << "< Cat > Copy Assigned" << std::endl;
	return (*this);
}

Cat::~Cat()
{
	delete (brain);
	std::cout << "< Cat > Copy Destructed" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "< Cat > Mewo" << std::endl;
}

const Brain *Cat::getBrain() const 
{
	return (this->brain);
}