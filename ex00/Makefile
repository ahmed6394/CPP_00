# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gahmed <gahmed@student.42heilbronn.de>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/02 12:13:32 by gahmed            #+#    #+#              #
#    Updated: 2025/06/03 22:05:01 by gahmed           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++17

SRC = megaphone.cpp

NAME = megaphone

all: $(NAME)

$(NAME):
	@$(CC) $(CPPFLAGS) -o $(NAME) $(SRC)
	@echo "\033[32mProgram is ready to execute\033[0m"

clean:
	@rm -f $(NAME)

fclean: clean

re: fclean all

