# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/09 19:41:30 by tkeynes           #+#    #+#              #
#    Updated: 2017/08/13 21:18:48 by tkeynes          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = sudoku

SRC = ft_putstr.c ft_strlen.c ft_last_check.c \
		ft_sudoku_solver.c ft_sudoku_util.c main.c

OBJFILES = ft_sudoku_solver.h.gch ft_sudoku_util.h.gch

FLAGS = -Wall -Werror -Wextra

HEADERS = ./headers/

all:
	gcc $(FLAGS) -o $(NAME) $(SRC) -I $(HEADERS)

clean:
		/bin/rm -f $(OBJFILES)

fclean: clean
		/bin/rm -f $(NAME)

re: fclean all
