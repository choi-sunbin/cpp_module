/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 16:43:45 by sunbchoi          #+#    #+#             */
/*   Updated: 2022/02/15 03:02:08 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen( void )
{
}

Karen::~Karen( void )
{
}

void	Karen::complain( std::string level )
{
	int loop;
	int select_num;
	std::string complainsS[] = { "debug", "info", "warning", "error" };
	std::string complainsB[] = { "DEBUG", "INFO", "WARNING", "ERROR" };
	void 	(Karen::*select_complain)();
	void	(Karen::*complains_func[])( void ) = {
		&Karen::debug,
		&Karen::info,
		&Karen::warning,
		&Karen::error
	};
	
	loop = 0;
	select_num = -1;
	while (loop < 4)
	{
		if (level == complainsS[loop] || level == complainsB[loop])
			select_num = loop;
		loop++;
	}
	if (select_num == -1)
	{
		this->default_cmd();
		return ;
	}
	loop = select_num;
	while (loop < 4)
	{
		select_complain = complains_func[loop];
		(this->*select_complain)();
		loop++;
	}
}

void	Karen::default_cmd ( void )
{
	std::cout << "[ Probably complaining about insignificant problems ]"<< std::endl;
}

void	Karen::debug( void )
{
	std::cout << "[ DEBUG ]"<< std::endl;
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. "\
				"I just love it!" << std::endl;
}

void	Karen::info( void )
{
	std::cout << "[ INFO ]"<< std::endl;
	std::cout << "I cannot believe adding extra bacon cost more money. "\
				" You don’t put enough! If you did I would not have to ask for it!" 
				<< std::endl;
}

void	Karen::warning( void )
{
	std::cout << "[ WARNING ]"<< std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. "\
				"I’ve been coming here for years and you just started working here last month."
				<< std::endl;
}

void	Karen::error( void )
{
	std::cout << "[ ERROR ]"<< std::endl;
	std::cout << "This is unacceptable, "\
				"I want to speak to the manager now."
				<< std::endl;
}