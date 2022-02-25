/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 14:50:18 by sunbchoi          #+#    #+#             */
/*   Updated: 2022/02/25 14:50:20 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.hpp"

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cerr << "required one argument" << std::endl;
		return (1);
	}
	Scalar scalar(argv[1]);

	std::cout << scalar;
	return (0);
}
