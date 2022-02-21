/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 01:56:27 by sunbchoi          #+#    #+#             */
/*   Updated: 2022/02/21 23:35:27 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
public:
	ClapTrap(void);
	ClapTrap(const std::string &name);
	~ClapTrap(void);

	ClapTrap&	operator=(const ClapTrap  &other);
	void	attack(const std::string  &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

private:
	std::string	name;
	int			hitPoints;
	int			energyPoints;
	int			maxEnergyPoints;
	int			attackDamage;
};

#endif