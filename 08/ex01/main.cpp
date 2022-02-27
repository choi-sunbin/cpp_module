/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 15:05:27 by sunbchoi          #+#    #+#             */
/*   Updated: 2022/02/27 15:05:28 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <vector>
#include "span.hpp"

int main(void)
{
	{
		std::cout << "============ Basic test ============" << std::endl;
		Span sp = Span(5);

		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	{
		std::cout << "============ MIN MAX ============" << std::endl;
		
		Span sp = Span(2);
		sp.addNumber(INT32_MAX);
		sp.addNumber(INT32_MIN);
		
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	{
		std::cout << "============ Exception test ============" << std::endl;
		Span sp = Span(5);
		std::cout << "___ empty vector ___" << std::endl;
		try
		{
			sp.shortestSpan();
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
		try
		{
			sp.longestSpan();
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	{
		std::cout << "============ Has One ============" << std::endl;
		
		Span sp = Span(1);
		sp.addNumber(42);
		try
		{
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		catch( std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	{
		Span sp(4);
		int loop;
		loop = 1;
		std::cout << "___ push more than initial ___" << std::endl;
		try
		{
			while (loop < 10)
			{
				sp.addNumber(loop);
				std::cout << "OK :" << loop << std::endl;
				loop++;
			}
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	{
		std::cout << "============ Iterator test ============ " << std::endl;

		Span sp(30000);
		std::vector<int> vec;
		for (int i = 0; i < 30000; i++)
		{
			vec.push_back(i + 1);
		}
		sp.addNumber(vec.begin(), vec.end());
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	return (0);
}
