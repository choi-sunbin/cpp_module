/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 23:47:05 by sunbchoi          #+#    #+#             */
/*   Updated: 2022/02/18 00:07:33 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char *argv[])
{
	int	loop;
	int loop2;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		loop = 1;
		while (loop < argc)
		{
			loop2 = 0;
			while(argv[loop][loop2] != 0)
			{
				if (argv[loop][loop2] >= 'a' && argv[loop][loop2] <= 'z')
					argv[loop][loop2] -= 'a' - 'A';
				loop2++;
			}
			std::cout << argv[loop];
			loop++;
		}
		std::cout << std::endl;
	}
	return (0);
}