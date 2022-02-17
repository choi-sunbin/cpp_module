# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/11 00:58:36 by sunbchoi          #+#    #+#              #
#    Updated: 2022/02/09 17:41:00 by sunbchoi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook
SRC = friends.cpp \
	main.cpp\
	
CC = clang++
CFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME) : $(SRC)
	$(CC) $(CFLAGS) -o $@ $^

clean : 

fclean :
	rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re