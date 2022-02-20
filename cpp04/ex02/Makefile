NAME = a.out
CC = c++
CFLAGS = -std=c++98 -Wall -Wextra -Werror

RM = rm -rf
HEADER = ./
SRCS = main.cpp \
		Cat.cpp \
		Dog.cpp \
		Animal.cpp \
		Brain.cpp

OBJS = $(SRCS:.cpp=.o)

%.o: %.cpp
	@$(CC) $(CFLAGS) -I$(HEADER) -o $@ -c $<
$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) -I$(HEADER) -o $(NAME) $(OBJS)

all: $(NAME)

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
