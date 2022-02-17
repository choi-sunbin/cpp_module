/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 17:46:48 by sunbchoi          #+#    #+#             */
/*   Updated: 2022/02/07 16:46:30 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


void Zombie::announce(void)
{
	std::cout << "<" << name << "> " << "BraiiiiiiinnnzzzZ" << std::endl;
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