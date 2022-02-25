/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 03:11:48 by sunbchoi          #+#    #+#             */
/*   Updated: 2022/02/26 03:11:49 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "iter.hpp"

void print_string(std::string &str)
{
	std::cout << str << std::endl;
}

template<typename T>
void print_input(T &whatever)
{
	std::cout << "Print :"<< whatever << std::endl;
}

int main(void)
{
	std::string str[] = {"str1", "str2", "str3"};
	::iter(str, 3, &print_input);
	int iarr[] = {1, 2, 3};
	::iter(iarr, 3, &print_input);
	return (0);
}
