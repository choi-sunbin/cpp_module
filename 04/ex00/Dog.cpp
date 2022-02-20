/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 13:37:45 by sunbchoi          #+#    #+#             */
/*   Updated: 2022/02/20 13:37:46 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Dog.hpp"

Dog::Dog() : Animal()
{
	this->type = "Dog";
	std::cout << "< Dog > Default consturctor" << std::endl;
}

Dog::Dog(const Animal &other) : Animal()
{
	this->type = other.getType();
	std::cout << "< Dog > Copy consturctor" << std::endl;
}

Dog &Dog::operator=(const Animal &other)
{
	this->type = other.getType();
	std::cout << "< Dog > Copy Assigned" << std::endl;
	return *this;
}

Dog::~Dog()
{
	std::cout << "< Dog > Copy Destructed" << std::endl; 
}

void Dog::makeSound() const 
{
	std::cout << "< Dog > BowBow" << std::endl; 
}