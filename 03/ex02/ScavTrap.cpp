/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 01:57:04 by sunbchoi          #+#    #+#             */
/*   Updated: 2022/02/20 14:47:52 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	this->name = "None";
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->maxEnergyPoints = 50;
	this->attackDamage = 20;
	std::cout << "Default ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string &name)
{
	this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->maxEnergyPoints = 50;
	this->attackDamage = 20;
	std::cout << "ScavTrap " \
		<< "<" << name << ">" \
		<< " is Created" \
		<< std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap " \
		<< "<" << name << ">" \
		<< " Destructor called" \
		<< std::endl;
	return;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap &other)
{
	name = other.name;
	hitPoints = other.hitPoints;
	energyPoints = other.energyPoints;
	attackDamage = other.attackDamage;
	maxEnergyPoints = other.maxEnergyPoints;
	
	std::cout << "ScavTrap " \
	<< "<" << this->name << ">" \
	<< " operator= is called" \
	<< std::endl;
	return (*this);
}

void		ScavTrap::attack(const std::string &target)
{
	std::cout << "ScavTrap " \
	<< "<" << name << ">" \
	<< " attack <" << target << ">" \
	<< " causing <" << attackDamage << "> points of damage!" \
	<< std::endl;
}

void		ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " \
	<< "<" << name << ">" \
	<< " is guarding the gate." \
	<< std::endl;
}
