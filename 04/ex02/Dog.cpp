/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 13:37:45 by sunbchoi          #+#    #+#             */
/*   Updated: 2022/02/21 19:16:39 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	this->type = "Dog";
	brain = new Brain();
	std::cout << "< Dog > Default consturctor" << std::endl;
}

Dog::Dog(const Dog &other)
{
	this->type = other.getType();
	this->brain = new Brain(*other.getBrain());
	std::cout << "< Dog > Copy consturctor" << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
	this->type = other.getType();
	*(this->brain) = *(other.getBrain());
	std::cout << "< Dog > Copy Assigned" << std::endl;
	return (*this);
}

Dog::~Dog()
{
	delete (brain);
	std::cout << "< Dog > Copy Destructed" << std::endl; 
}

void Dog::makeSound() const 
{
	std::cout << "< Dog > BowBow" << std::endl; 
}

const Brain *Dog::getBrain() const 
{
	return (this->brain);
}