/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 02:07:49 by sunbchoi          #+#    #+#             */
/*   Updated: 2022/02/18 02:17:14 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

std::string FragTrap::List[5] = {"PeePee!", "PooPoo!", "throwing paci!", "BooBoo Attack!", "Covering blanky!"};

FragTrap::FragTrap(void)
	: name("undefined")
	, hitPoints(100)
	, maxHitPoints(100)
	, energyPoints(100)
	, maxEnergyPoints(100)
	, level(1)
	, meleeAttackDamage(30)
	, rangedAttackDamage(20)
	, armorDamageReduction(5)
{
	srand(time(NULL));
	std::cout << name << " is booted! HURRAY!" << std::endl;
}

FragTrap::FragTrap(const std::string& name)
	: name(name)
	, hitPoints(100)
	, maxHitPoints(100)
	, energyPoints(100)
	, maxEnergyPoints(100)
	, level(1)
	, meleeAttackDamage(30)
	, rangedAttackDamage(20)
	, armorDamageReduction(5)
{
	srand(time(NULL));
	std::cout << name << " is booted! HURRAY!" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other)
{
	srand(time(NULL));
	*this = other;
	std::cout << name << " is booted! HURRAY!" << std::endl;
}

FragTrap&	FragTrap::operator=(const FragTrap& other)
{
	name = other.name;
	hitPoints = other.hitPoints;
	energyPoints = other.energyPoints;
	maxHitPoints = other.maxHitPoints;
	maxEnergyPoints = other.maxEnergyPoints;
	level = other.level;
	meleeAttackDamage = other.meleeAttackDamage;
	rangedAttackDamage = other.rangedAttackDamage;
	armorDamageReduction = other.armorDamageReduction;
	return (*this);
}

FragTrap::~FragTrap(void)
{
	std::cout << "Am I dead? UNBELIEVABLE!" << std::endl;
}

void		FragTrap::rangedAttack(const std::string& target)
{
	if (getHitPoints() > 0)
	{
		std::cout << "FR4G-TP "
					<< "<" << name << ">"
					<< " attacks "
					<< "<" << target << ">"
					<< " at range, causing "
					<< "<" << rangedAttackDamage << ">"
					<< " points of damage!" << std::endl;
	}
}

void		FragTrap::meleeAttack(const std::string& target)
{
	if (getHitPoints() > 0)
	{
		std::cout << "FR4G-TP "
					<< "<" << name << ">"
					<< " attacks "
					<< "<" << target << ">"
					<< " at melee, causing "
					<< "<" << meleeAttackDamage << ">"
					<< " points of damage!" << std::endl;
	}
}

void		FragTrap::takeDamage(unsigned int amount)
{
	if (getHitPoints() > 0)
	{
		int damage = amount - armorDamageReduction;

		if (damage < 0)
		{
			damage = 0;
		}
		hitPoints -= damage;
		if (hitPoints > 0)
		{
			std::cout << "<" << name << ">"
						<< " takes "
						<< "<" << damage << ">"
						<< " damages! " << std::endl;
		}
		else
		{
			hitPoints = 0;
			std::cout << "<" << name << ">"
						<< " is broken! " << std::endl;
		}
	}
	else
	{
		std::cout << "<" << name << ">"
					<< " was already broken! " << std::endl;
	}
}

void		FragTrap::beRepaired(unsigned int amount)
{
	hitPoints += amount;
	if (hitPoints > maxHitPoints)
	{
		hitPoints = maxHitPoints;
	}
	std::cout << "<" << name << "> "
				<< "has been repaired!"
				<< " <" <<  hitPoints << ">" << std::endl;
}

void		FragTrap::vaulthunter_dot_exe(const std::string& target)
{
	if (getHitPoints() > 0)
	{
		if (energyPoints >= 25)
		{
			energyPoints -= 25;
			if (energyPoints < 0)
			{
				energyPoints = 0;
			}
			else if (energyPoints > maxEnergyPoints)
			{
				energyPoints = maxEnergyPoints;
			}
			std::cout << "FR4G-TP "
						<< "<" << name << ">"
						<< " attacks "
						<< "<" << target << ">"
						<< " at " << List[rand() % 5] << ", causing "
						<< "<" << 0 << ">"
						<< " points of damage! USELESS!" << std::endl;
		}
		else
		{
			std::cout << "FR4G-TP "
						<< "<" << name << ">"
						<< " not enough engery!" << std::endl;
		}
	}
}

const int&	FragTrap::getHitPoints(void) const
{
	return (hitPoints);
}