/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 01:07:40 by sunbchoi          #+#    #+#             */
/*   Updated: 2022/02/04 17:00:14 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int command_check(std::string cmd)
{
	if (cmd == "EXIT" || cmd == "e" || cmd == "exit")
		return (COM_EXIT);
	else if (cmd == "ADD" || cmd == "a" || cmd == "add")
		return (COM_ADD);
	else if (cmd == "SEARCH" || cmd == "s" || cmd == "search")
		return (COM_SEARCH);
	else
		std::cout << "Invalid command Input" << std::endl;
	return (FAIL);
}

void	command_exit(void)
{
	std::cout << "PROCESS EXIT\n";
	exit(EXIT_SUCCESS);
}

int	command_add(Friend &new_friend)
{
	new_friend.set_info();
	return (0);
}

std::string	Friend::str_trim(std::string str)
{
	std::string sub_str;
	
	if (str.length	() >= 10)
		sub_str = str.substr(0, 9) + ".";
	else
		sub_str = str;
	return (sub_str);
}

std::string prompt_input(std::string str)
{
	std::string input;

	std::cout << str;
	std::getline(std::cin, input);
	std::cin.clear();
	if (input.length() == 0)
		input = prompt_input(str);
	return (input);
}

int	command_search(Friend friend_info[8], int cnt)
{
	Friend cur_friend;
	std::string view_cmd;
	std::stringstream stream;
	int index;
	int	loop;

	std::cout << std::right << std::setw(10) << "Index";
    std::cout << "|";
    std::cout << std::right << std::setw(10) << "First Name";
    std::cout << "|";
    std::cout << std::right << std::setw(10) << "Last Name";
    std::cout << "|";
    std::cout << std::right << std::setw(10) << "Nick Name";
    std::cout << "|";
	std::cout << std::endl;
	loop = 0;
	while (loop < 8 && loop < cnt)
	{
		if (cnt >= 8)
			friend_info[(loop + cnt) % 8].print_search(loop);
		else
			friend_info[loop].print_search(loop);
		loop++;
	} 
	view_cmd = prompt_input("Select index :");
	stream << view_cmd;
	stream >> index;
	if (0 <= index && index <= 8 && stream.fail() == false)
        friend_info[index].print_info();
    else
        std::cout << "This is an unauthorized number." << std::endl;
	return (0);
}
	
void print_intro(void)
{
	std::cout << "START My Awesome Phonebook APP\n";
	std::cout << "Currently, the phone book is empty.\n";
	std::cout << "To add information, please use the \"ADD\" command.\n";
	std::cout << "To search the information entered so far Please use the \"SEARCH\"command \n";
	std::cout << "Finally, To end program, Please use the \"EXIT\" command" << std::endl;
}

int main()
{
	std::string	cmd;
	int	comand_flag;
	Friend	friends[8];
	int		friend_count;

	print_intro();
	friend_count = 0;
	while(true)
    {
		cmd = prompt_input(">");
		comand_flag = command_check(cmd);
		if (!comand_flag)
			continue;
		//PROCESS
		if (comand_flag == COM_EXIT)
			command_exit();
		else if (comand_flag == COM_ADD)
		{
			command_add(friends[friend_count % 8]);
			friend_count++;
		}
		else if (comand_flag == COM_SEARCH)
			command_search(friends, friend_count);
		if (friend_count == 16)
			friend_count = 8;
	}
	return (0);
}