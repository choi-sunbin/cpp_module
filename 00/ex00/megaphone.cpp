/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 23:47:05 by sunbchoi          #+#    #+#             */
/*   Updated: 2022/01/09 23:58:45 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

namespace	megaphone
{
	void	use(char *str)
	{
		int loop;
		
		loop = 0;
		while(str[loop] != 0)
		{
			if (str[loop] >= 'a' && str[loop] <= 'z')
				str[loop] -= 'a' - 'A';
			loop++;
		}
		std::cout << str;
	}
	void	none_str()
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
}

int	main(int argc, char *argv[])
{
	int	loop;

	if (argc == 1)
		megaphone::none_str();
	else
	{
		loop = 1;
		while (loop < argc)
		{
			megaphone::use(argv[loop]);
			loop++;
		}
		std::cout << std::endl;
	}
	return (0);
}