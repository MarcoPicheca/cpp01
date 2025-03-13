# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mapichec <mapichec@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/14 14:42:32 by marco             #+#    #+#              #
#    Updated: 2025/03/13 18:50:10 by mapichec         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Brainz

CFLAGS = -Wall -Wextra -Werror -g

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