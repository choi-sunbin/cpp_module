/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 17:46:48 by sunbchoi          #+#    #+#             */
/*   Updated: 2022/02/09 15:27:22 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


void Zombie::announce(void)
{
	std::cout << "<" << name << "> " << "BraiiiiiiinnnzzzZ" << std::endl;
}

//name NULL 초기화로 하면 안된다
Zombie::Zombie(void)
	: name("")
{
	std::cout << "Zombie is created" << std::endl;
}

void Zombie::setName(std::string newName)
{
	this->name = newName;
}

// 생성자
Zombie::Zombie(std::string newName)
	: name(newName)
{
	std::cout << "<" << name << "> " << "is created" << std::endl;
}


// 소멸자
Zombie::~Zombie(void)
{
	std::cout << "<" << name << "> " << "is died." << std::endl;
}