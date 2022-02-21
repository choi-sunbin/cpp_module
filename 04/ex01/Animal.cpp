/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 13:36:59 by sunbchoi          #+#    #+#             */
/*   Updated: 2022/02/21 16:41:41 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
	std::cout << "< Animal > Default consturctor" << std::endl;
}

Animal::Animal(const Animal &other) : type(other.getType())
{ 
	std::cout << "< Animal > Copy consturctor" << std::endl;
}

Animal::~Animal()
{
	std::cout << "< Animal > Destructor" << std::endl;
}

Animal &Animal::operator=(const Animal &other)
{
	this->type = other.getType();
	std::cout << "< Animal > Assigned" << std::endl;
	return *this;
}


std::string Animal::getType() const
{
	return (this->type); 
}

void Animal::makeSound() const
{
	std::cout << "< Animal > Nope " << std::endl;
}
