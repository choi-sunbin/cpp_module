# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/07 17:01:26 by sunbchoi          #+#    #+#              #
#    Updated: 2022/02/19 12:10:11 by sunbchoi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ClapTrap
SRC = ClapTrap.cpp \
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