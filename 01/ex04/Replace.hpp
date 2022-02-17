/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 16:12:14 by sunbchoi          #+#    #+#             */
/*   Updated: 2022/02/17 02:09:41 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
# define REPLACE_HPP

# include <iostream>
# include <sys/stat.h>
# include <fstream>
# include <sstream>
# include <string>

# define SUCCESS            0
# define ERROR              1
# define ERR_ARG      		2
# define ERR_EMPTY        	3
# define ERR_FILE 			4

int     treat_error(int err_num);

#endif