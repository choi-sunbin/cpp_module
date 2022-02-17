/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 01:13:30 by sunbchoi          #+#    #+#             */
/*   Updated: 2022/02/04 16:53:49 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <string>
# include <iomanip>
# include <iostream>
# include <sstream>

# define FAIL 0
# define SUCCESS 1

# define COM_EXIT 1
# define COM_ADD 2
# define COM_SEARCH 3

class Friend
{
public :
	std::string	str_trim(std::string cmd);
	int set_info(void);
	void print_search(int index);
	void print_info(void);
private:
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_num;
	std::string secret_info;
};

std::string prompt_input(std::string str);


#endif