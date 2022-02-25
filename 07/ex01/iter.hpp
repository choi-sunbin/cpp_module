/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 02:55:02 by sunbchoi          #+#    #+#             */
/*   Updated: 2022/02/26 03:08:56 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>
#include <string>
#include <cstdlib>

template <typename T>
void iter(T *array, int length, void (*func)(const T &))
{
	int loop;

	loop = 0;
	while (loop < length)
	{
		func(array[loop]);
		loop++;
	}
}

#endif 