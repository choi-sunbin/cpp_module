/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 16:22:55 by sunbchoi          #+#    #+#             */
/*   Updated: 2022/02/11 15:16:13 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA
{

public:

	HumanA(std::string name, Weapon &weapon);
	~HumanA(void);
	void	attack(void);
	Weapon&	getWeapon(void);

private:
	std::string	name;
	Weapon		&weapon;
};