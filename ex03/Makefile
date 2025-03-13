NAME = unnecessary_violence

CFLAGS = -Wall -Wextra -Werror -std=c++98 -g


CC = c++

SRC = main.cpp Weapon.cpp \
	  HumanA.cpp HumanB.cpp \

all: $(NAME)

$(NAME): $(SRC)
	@echo "Compiling..."
	@$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	@echo "Cleaning..."
	@rm $(NAME)

fclean: clean

re: clean all

.PHONY: re clean all fclean