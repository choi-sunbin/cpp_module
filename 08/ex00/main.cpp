/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 14:23:13 by sunbchoi          #+#    #+#             */
/*   Updated: 2022/02/27 13:08:19 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <vector>
#include "easyfind.hpp"

int	main( void )
{
	std::vector<int>	vec_int;
	std::vector<int>::iterator	it;
	int	loop;

	loop = 1;
	while (loop <= 100)
	{
		vec_int.push_back(loop);
		loop++;
	}
	try 
	{
		it = easyfind(vec_int, 43);
		std::cout << "CUR : "<< *it << std::endl;
	
		it = easyfind(vec_int, 101);
		std::cout << "CUR : "<< *it << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
