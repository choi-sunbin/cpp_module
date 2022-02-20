/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 01:57:04 by sunbchoi          #+#    #+#             */
/*   Updated: 2022/02/20 03:13:14 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	this->name = "None";
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->maxEnergyPoints = 100;
	this->attackDamage = 30;
	std::cout << "Default FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(const std::string &name)
{
	this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->maxEnergyPoints = 100;
	this->attackDamage = 30;
	std::cout << "FragTrap " \
		<< "<" << name << ">" \
		<< " is Created" \
		<< std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap " \
		<< "<" << name << ">" \
		<< " Destructor called" \
		<< std::endl;
	return;
}

FragTrap&	FragTrap::operator=(const FragTrap &other)
{
	name = other.name;
	hitPoints = other.hitPoints;
	energyPoints = other.energyPoints;
	attackDamage = other.attackDamage;
	maxEnergyPoints = other.maxEnergyPoints;
	
	std::cout << "FragTrap " \
	<< "<" << this->name << ">" \
	<< " operator= is called" \
	<< std::endl;
	return (*this);
}

void	FragTrap::highFivesGuys( void )
{
	std::cout << "FragTrap " \
	<< "<" << this->name << ">" \
	<< " is doing high fives with guys" \
	<< std::endl;
}