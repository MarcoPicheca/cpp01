
NAME = Brainz

CFLAGS = -Wall -Wextra -Werror -g

CC = c++

SRC = main.cpp Zombie.cpp zombieHorde.cpp

all: $(NAME)

$(NAME): $(SRC)
	@echo "Compiling..."
	@$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	@echo "Cleaning..."
	@rm $(NAME)

re: clean all

.PHONY: re clean all