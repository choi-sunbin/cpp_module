/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 01:13:30 by sunbchoi          #+#    #+#             */
/*   Updated: 2022/02/17 19:15:35 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <string>
# include <iomanip>
# include <iostream>
# include <sstream>
# include "Contact.hpp"

# define FAIL 0
# define SUCCESS 1

# define COM_EXIT 1
# define COM_ADD 2
# define COM_SEARCH 3

class Phonebook
{
public :
	int set_info(int cnt);
	Contact *ret_bookarray(void);
private:
	Contact contents[8];
};

std::string prompt_input(std::string str);


#endif