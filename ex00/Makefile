# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gahmed <gahmed@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/02 12:13:32 by gahmed            #+#    #+#              #
#    Updated: 2025/04/02 14:12:10 by gahmed           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++17 -MMD -MP

SRC = $(wildcard *.cpp)
OBJ = $(SRC:.cpp=.o)
DEP = $(OBJ:.o=.d)

NAME = megaphone

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)
	@echo "\033[32mProgram is ready to execute\033[0m"

%.o: %.cpp
	@$(CC) $(CPPFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ) $(DEP)

fclean: clean
	@rm -f $(NAME)

re: fclean all

-include $(DEP)
