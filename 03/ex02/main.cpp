/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 12:22:26 by sunbchoi          #+#    #+#             */
/*   Updated: 2022/02/22 00:44:03 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	// {
	// 	ClapTrap    a;
	// 	ClapTrap    b("b");
	// 	ClapTrap	c;

	// 	c = b;
	// 	b.attack("a");
	// 	b.takeDamage(5);
	// 	b.beRepaired(3);
	// 	b.takeDamage(10);
	// 	b.beRepaired(20);
	// }
	// {
	// 	ScavTrap    b("b");
	// 	ScavTrap	c;

	// 	c = b;
	// 	b.attack("a");
	// 	b.guardGate();
	// }
	{
		FragTrap    b("b");
		FragTrap	c;

		c = b;
		b.attack("a");
		b.highFivesGuys();
	}
	return (0);
}