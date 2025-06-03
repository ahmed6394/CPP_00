
CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++17

SRC = $(wildcard *.cpp)
HEAD = $(wildcard *.hpp)
OBJ = $(SRC:.cpp=.o)
DEP = $(OBJ:.o=.d)

NAME = phonebook

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME) -lreadline
	@echo "\033[32mPhonebook is ready to execute\033[0m"

%.o: %.cpp $(HEAD)
	$(CC) $(CPPFLAGS) -c $< -o $@

clean:
	@rm -f *.o *.d
fclean: clean
	@rm -f $(NAME)

re: fclean all

-include $(DEP)