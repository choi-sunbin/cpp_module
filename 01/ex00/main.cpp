/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 14:25:55 by sunbchoi          #+#    #+#             */
/*   Updated: 2022/02/07 17:52:38 by sunbchoi         ###   ########.fr       */
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
	std::cout << "Second Zombie use newZombie function and delete"<< std::endl;
	{
		Zombie	*secondZombie = newZombie("Second");
		secondZombie->announce();
		delete secondZombie;
	}
	
	std::cout << "Third Zombie, use randomChump"<< std::endl;
	randomChump("Third");
}
