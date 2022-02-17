/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 17:47:28 by sunbchoi          #+#    #+#             */
/*   Updated: 2022/02/07 17:03:09 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <string>
# include <iomanip>
# include <iostream>


class Zombie
{
	public:
		void announce(void);
		Zombie(std::string name);
		~Zombie(void);

	private:
	// zombie 이름
		std::string name;
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif