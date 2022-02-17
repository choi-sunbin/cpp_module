/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 16:22:58 by sunbchoi          #+#    #+#             */
/*   Updated: 2022/02/11 15:16:39 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */




#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanB
{

public:

	HumanB(std::string name);
	~HumanB(void);
	void	attack( void );

	Weapon&	getWeapon( void );
	bool	setWeapon( Weapon& newWeapon );
private:
	std::string	name;
	Weapon		*weapon;
};