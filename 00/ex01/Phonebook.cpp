/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 17:02:08 by sunbchoi          #+#    #+#             */
/*   Updated: 2022/02/17 19:17:40 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int Phonebook::set_info(int cnt)
{
	(this->contents[cnt]).set_info();
	return (0);
}

Contact	*Phonebook::ret_bookarray(void)
{
	return (this->contents);
}