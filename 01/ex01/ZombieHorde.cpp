/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 14:26:03 by sunbchoi          #+#    #+#             */
/*   Updated: 2022/02/09 15:17:14 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int n, std::string name)
{
	int					loop;
	Zombie*				retHorde = 	new Zombie[n];

	loop = 0;
	while (loop < n)
	{
		retHorde[loop].setName(name); 
		loop++;
	}
	return (retHorde);
}
