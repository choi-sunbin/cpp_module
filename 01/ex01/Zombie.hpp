/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 17:47:28 by sunbchoi          #+#    #+#             */
/*   Updated: 2022/02/09 15:03:52 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <string>
# include <iomanip>
# include <iostream>
# include <sstream>

class Zombie
{
	public:
		Zombie();
		Zombie(std::string name);
		void announce(void);
		void setName(std::string name);
		~Zombie(void);

	private:
	// zombie 이름
		std::string name;
};

Zombie*	zombieHorde(int n, std::string name);
Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif