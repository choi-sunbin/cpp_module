/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 14:25:55 by sunbchoi          #+#    #+#             */
/*   Updated: 2022/02/09 15:19:59 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main( void )
{


	std::cout << "First Zombie Create and Announce" << std::endl;
	{
		Zombie	firstZombie("First");
		firstZombie.announce();
	}
	std::cout << "Using zombieHorde function and delete"<< std::endl;
	{
		int 		loop;
		const int	input = 5;
		Zombie		*zombies = zombieHorde(input, "Zombie");
	
		loop = 0;
		while (loop < input)
		{
			std::cout << loop << " : ";
			zombies[loop].announce();
			loop++;
		}
		delete [] zombies;
	}

}
