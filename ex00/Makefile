# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marco <marco@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/14 14:42:32 by marco             #+#    #+#              #
#    Updated: 2025/02/21 15:38:57 by marco            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Brainz

CFLAGS = -Wall -Wextra -Werror -std=c++98 -g

CC = c++

SRC = main.cpp newZombie.cpp randomChump.cpp Zombie.cpp

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