/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 01:07:40 by sunbchoi          #+#    #+#             */
/*   Updated: 2022/02/17 21:40:53 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "Contact.hpp"

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

int	command_add(Phonebook &book, int cnt)
{
	book.set_info(cnt);
	return (0);
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

int	command_search(Contact book_info[8], int cnt)
{
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
			book_info[(loop + cnt) % 8].print_search(loop);
		else
			book_info[loop].print_search(loop);
		loop++;
	} 
	view_cmd = prompt_input("Select index :");
	stream << view_cmd;
	stream >> index;
	if (0 <= index && index <= 8 && index < cnt && stream.fail() == false)
        book_info[index].print_info();
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
	Phonebook book;
	int		friend_count;

	print_intro();
	friend_count = 0;
	while(true)
    {
		cmd = prompt_input(">");
		comand_flag = command_check(cmd);
		if (!comand_flag)
			continue;
		if (comand_flag == COM_EXIT)
			command_exit();
		else if (comand_flag == COM_ADD)
		{
			command_add(book, (friend_count % 8));
			friend_count++;
		}
		else if (comand_flag == COM_SEARCH)
		{
			command_search(book.ret_bookarray(), friend_count);
		}
		if (friend_count == 16)
			friend_count = 8;
	}
	return (0);
}