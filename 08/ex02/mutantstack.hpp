/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 15:09:27 by sunbchoi          #+#    #+#             */
/*   Updated: 2022/02/27 16:20:05 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <algorithm>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
	MutantStack<T>();
	MutantStack<T>(MutantStack<T> const &src);
	~MutantStack<T>();
	MutantStack<T>	&operator=(MutantStack<T> const &other);
	
	typedef typename MutantStack<T>::stack::container_type::iterator iterator;
	iterator begin();
	iterator end();

	typedef typename MutantStack<T>::stack::container_type::reverse_iterator reverse_iterator;
	reverse_iterator rbegin();
	reverse_iterator rend();
};

#endif 
