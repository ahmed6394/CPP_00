# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gahmed <gahmed@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/02 13:47:10 by gahmed            #+#    #+#              #
#    Updated: 2025/04/02 13:47:12 by gahmed           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++17

SRC = $(wildcard *.cpp)
HEAD = $(wildcard *.hpp)
OBJ = $(SRC:.cpp=.o)
DEP = $(OBJ:.o=.d)

NAME = megaphone

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME) -lreadline
	@echo "\033[32mProgram is ready to execute\033[0m"

%.o: %.cpp $(HEAD)
    $(CC) $(CPPFLAGS) -c $< -o $@

clean:
	@rm -f *.o *.d
fclean: clean
	@rm -f $(NAME)

re: fclean all

-include $(DEP)