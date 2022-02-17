/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   friends.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 17:02:08 by sunbchoi          #+#    #+#             */
/*   Updated: 2022/02/04 15:48:35 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void Friend::print_search(int index)
{
	std::cout << std::setw(10) << std::setfill(' ') << index;
	std::cout << "|";
	std::cout << std::setfill(' ') << std::setw(10) << str_trim(this->first_name);
	std::cout << "|";
	std::cout << std::setfill(' ') << std::setw(10) << str_trim(this->last_name);
	std::cout << "|";
	std::cout << std::setfill(' ') << std::setw(10) << str_trim(this->nickname);
	std::cout << "|";
	std::cout << std::endl;
}

int Friend::set_info(void)
{
	std::string info;

	info = prompt_input("Set First Name:");
	this->first_name = info;
	info = prompt_input("Set Last Name :");
	this->last_name = info;
	info = prompt_input("Set Nick Name :");
	this->nickname = info;
	info = prompt_input("Set Phone number :");
	this->phone_num = info;
	info = prompt_input("Set Secret :");
	this->secret_info = info;
	print_search(0);
	return (0);
}

void Friend::print_info(void)
{
	std::cout << "First Name :" << this->first_name << std::endl;
	std::cout << "Last Name :" << this->last_name << std::endl;
	std::cout << "Nick Name :" << this->nickname << std::endl;
	std::cout << "Phone Num :" << this->phone_num << std::endl;
	std::cout << "Secret :" << this->secret_info << std::endl;
}