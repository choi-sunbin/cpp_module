/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 15:06:56 by sunbchoi          #+#    #+#             */
/*   Updated: 2022/02/23 09:23:52 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <time.h>
#include <unistd.h>

std::string make_rand_brain()
{
	const static std::string think = "ANBKMCLZOQ";
	std::string ret;

	ret = think[rand() % 10];
	return (ret);
}

Brain::Brain()
{
	int loop;
	
	loop = 0;
	sleep(1);
	srand(time(NULL));
	while (loop < 100)
	{
		idea[loop] = make_rand_brain();
		loop++;
	}
	std::cout << "< Brain > Default consturctor" << std::endl;
}

Brain::Brain(const Brain &other)
{
	int loop;
	
	loop = 0;
	while (loop < 100)
	{
		idea[loop] = other.getIdea(loop);
		loop++;
	}
	std::cout << "< Brain > Copy consturctor" << std::endl;
}

Brain &Brain::operator=(const Brain &other)
{
	int loop;

	loop = 0;
	while (loop < 100)
	{
		idea[loop] = other.getIdea(loop);
		loop++;
	}
	std::cout << "< Brain > Assigned" << std::endl;
	return (*this);
}

Brain::~Brain()
{
	std::cout << "< Brain > Destructor" << std::endl;
}

std::string Brain::getIdea(const int &idx) const
{
	return this->idea[idx];
}
