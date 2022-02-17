/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 16:12:37 by sunbchoi          #+#    #+#             */
/*   Updated: 2022/02/17 02:44:28 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

static void    replace(const char *file_name, const char *s1, const char *s2)
{
    std::ifstream       file(file_name);
    std::ostringstream  text;
    std::string         str_search(s1);
    std::string         str_replace(s2);
    std::string         str;
    
	size_t              find_pos;

    text << file.rdbuf();
    str = text.str();
    while (true)
    {
        find_pos = str.find(str_search);
        if (find_pos == std::string::npos)
            break;
		str.erase(find_pos, str_search.length());
        str.insert(find_pos, str_replace);
	}
    file.close();
    std::ofstream file2(std::string(file_name) + ".replace");
    file2 << str;
}

int file_exist(std::string file_name)
{
    struct stat buffer;

    return (stat(file_name.c_str(), &buffer) == 0);
}

int      check_input(char **argv)
{
    int loop;
	std::string str;
	
	loop = 1;
	while (loop < 4)
	{
		str = argv[loop];
			if (str.length() == 0)
				return (ERR_EMPTY);
		loop++;
	}
    str = argv[1];
    if (file_exist(str) == 0)
        return (ERR_FILE); 
    return (SUCCESS);
}

int print_error(int msg_num)
{
    std::string err_msgs[] = {
        "SUCCESS",							// SUCCESS
		"ERROR!!",                          // ERROR
        "Number of arguments is invalid.",  // ARGUMENT NUM ERR
        "An argument is empty.",            // ARG EMPTY ERR
        "File does not exist."              // FILE EXIST ERR
    };
	
    std::cout << err_msgs[msg_num] << std::endl;
    return (msg_num);
}

int main(int argc, char **argv)
{
    int check;
    
    if(argc != 4)
        return (print_error(ERR_ARG));
    else
    {
		check = check_input(argv);
        if (check != SUCCESS)
            return (print_error(check));
        replace((const char *)argv[1], (const char *)argv[2], (const char *)argv[3]);
    }
    return (SUCCESS);
}