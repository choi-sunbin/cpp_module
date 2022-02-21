# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/21 18:41:57 by sunbchoi          #+#    #+#              #
#    Updated: 2022/02/21 18:48:13 by sunbchoi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out

SRC = Animal.cpp \
	Cat.cpp \
	Dog.cpp \
	main.cpp \
	Brain.cpp \
	
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