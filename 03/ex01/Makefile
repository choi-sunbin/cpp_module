# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/07 17:01:26 by sunbchoi          #+#    #+#              #
#    Updated: 2022/02/20 02:53:13 by sunbchoi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ScavTrap
SRC = ClapTrap.cpp \
	ScavTrap.cpp \
	main.cpp \
	
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME) : $(SRC)
	$(CC) $(CFLAGS) -o $@ $^
	
clean : 

fclean :
	rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re