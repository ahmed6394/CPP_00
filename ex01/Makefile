
CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++17

SRC = contact.cpp phonebook.cpp main.cpp

NAME = phonebook

all: $(NAME)

$(NAME): 
	@$(CC) $(CPPFLAGS) -o $(NAME) $(SRC) -lreadline
	@echo "\033[32mPhonebook is ready to execute\033[0m"

clean:
	@rm -f $(NAME)
fclean: clean

re: fclean all
