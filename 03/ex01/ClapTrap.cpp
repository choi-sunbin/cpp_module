/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 01:55:57 by sunbchoi          #+#    #+#             */
/*   Updated: 2022/02/20 02:45:33 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap():
	name("None"), hitPoints(10),
	energyPoints(10), maxEnergyPoints(10),
	attackDamage(0)
{
	std::cout << "Default ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string &name): 
	name(name), hitPoints(10),
	energyPoints(10), maxEnergyPoints(10),
	attackDamage(0)
{
	std::cout << "ClapTrap " \
		<< "<" << name << ">" \
		<< " is Created" \
		<< std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap " \
		<< "<" << name << ">" \
		<< " Destructor called" \
		<< std::endl;
	return;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap &other)
{
	name = other.name;
	hitPoints = other.hitPoints;
	energyPoints = other.energyPoints;
	attackDamage = other.attackDamage;
	maxEnergyPoints = other.maxEnergyPoints;
	
	std::cout << "ClapTrap " \
	<< "<" << this->name << ">" \
	<< " operator= is called" \
	<< std::endl;
	return (*this);
}

void		ClapTrap::attack(const std::string &target)
{
	std::cout << "ClapTrap " \
	<< "<" << name << ">" \
	<< " attack <" << target << ">" \
	<< " causing <" << attackDamage << "> points of damage!" \
	<< std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	energyPoints -= amount;
	std::cout << "ClapTrap " \
		<< "<" << name << ">" \
		<< " is take " \
		<< " <" << amount << "> points of damaged!" \
		<< std::endl;
	
	if (energyPoints <= 0)
	{
		std::cout << "ClapTrap " \
		<< "<" << name << ">" \
		<< " is broken." << std::endl;
		energyPoints = 0;
	}
}

void		ClapTrap::beRepaired(unsigned int amount)
{
	
	energyPoints += amount;
	if (energyPoints > maxEnergyPoints)
	{
		energyPoints = maxEnergyPoints;
		std::cout << "ClapTrap " \
			<< "<" << name << ">" \
			<< " is perfectly repaired." << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " \
			<< "<" << name << ">" \
			<< " is repaired and has <" << energyPoints << ">" \
			<< " Energy Points" << std::endl;
	}
}

