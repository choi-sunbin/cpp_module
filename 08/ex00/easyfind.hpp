/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 14:22:35 by sunbchoi          #+#    #+#             */
/*   Updated: 2022/02/27 13:05:13 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iterator>

class OutOfRangeException : public std::exception
{
public:
	const char *what() const throw()
	{
		return "Out of range";
	}
};

template <typename T>
typename T::iterator easyfind(T &container, int value)
{
	typename T::iterator iter = std::find(container.begin(), container.end(), value);
	if (iter == container.end())
		throw OutOfRangeException();
	return iter;
};

#endif
