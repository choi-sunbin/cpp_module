/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 15:06:56 by sunbchoi          #+#    #+#             */
/*   Updated: 2022/02/21 17:38:25 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

std::string make_name(int idx)
{
	const static std::string num = "✋☺😐☹💣☠⚐✈☼✠";
	std::string ret;
	while (idx){
		ret.push_back(num[idx % 10]);
		idx /= 10;
	}
	return (ret);
}

Brain::Brain()
{
	int loop;
	
	loop = 0;
	while (loop < 100)
	{
		idea[loop] = make_name(loop + 1);
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
	std::cout << "< Brain > Copy Assigned" << std::endl;
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
