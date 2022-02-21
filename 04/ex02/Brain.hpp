/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 15:17:19 by sunbchoi          #+#    #+#             */
/*   Updated: 2022/02/20 15:18:08 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain
{
private:
	std::string idea[100];
public:
	Brain();
	Brain(const Brain &obj);
	Brain &operator=(const Brain &obj);
	~Brain();

	std::string getIdea(const int &idx) const;
};

#endif