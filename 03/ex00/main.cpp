/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 12:22:26 by sunbchoi          #+#    #+#             */
/*   Updated: 2022/02/20 01:55:22 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	std::cout << "----------constructor test----------" << std::endl;
	ClapTrap    a;
	ClapTrap    b("b");
	ClapTrap	c;
	
	c = b;
	std::cout << "------------fuction test------------" << std::endl;

	b.attack("a");
	b.takeDamage(5);
	b.beRepaired(3);
	
	b.takeDamage(10);
	b.beRepaired(20);
	
	return (0);
}