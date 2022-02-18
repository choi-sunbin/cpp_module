/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 01:50:07 by sunbchoi          #+#    #+#             */
/*   Updated: 2022/02/18 02:16:30 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>

class FragTrap
{
public:
	FragTrap(void);
	FragTrap(const std::string& name);
	FragTrap(const FragTrap& other);
	~FragTrap(void);

	FragTrap&			operator=(const FragTrap& other);
	void				rangedAttack(const std::string& target);
	void				meleeAttack(const std::string& target);
	void				takeDamage(unsigned int amount);
	void				beRepaired(unsigned int amount);
	void				vaulthunter_dot_exe(const std::string& target);
	const int&			getHitPoints(void) const;

private:
	std::string			name;
	int					hitPoints;
	int					maxHitPoints;
	int					energyPoints;
	int					maxEnergyPoints;
	int					level;
	int					meleeAttackDamage;
	int					rangedAttackDamage;
	int					armorDamageReduction;
	static std::string	List[5];

};

#endif