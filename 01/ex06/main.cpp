/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 15:51:43 by sunbchoi          #+#    #+#             */
/*   Updated: 2022/02/15 01:57:03 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Karen.hpp"

int	main(int argc, char **argv)
{
	Karen karen;
	if (argc != 2)
	{
		std::cerr << "Invalid Input" << std::endl;
		return (1);
	}
	karen.complain(argv[1]);
}
