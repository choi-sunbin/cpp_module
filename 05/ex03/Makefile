# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/07 17:01:26 by sunbchoi          #+#    #+#              #
#    Updated: 2022/02/25 03:26:23 by sunbchoi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out
SRC = main.cpp \
	Bureaucrat.cpp \
	Form.cpp \
	PresidentialPardonForm.cpp	\
	RobotomyRequestForm.cpp	\
	ShrubberyCreationForm.cpp \
	Intern.cpp \

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