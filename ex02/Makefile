
CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = Account.cpp tests.cpp

NAME = account

all: $(NAME)

$(NAME):
	@$(CC) $(CPPFLAGS) -o $(NAME) $(SRC)
	@echo "\033[32mProgram is ready to execute\033[0m"

clean:
	@rm -f $(NAME)

fclean: clean

re: fclean all

