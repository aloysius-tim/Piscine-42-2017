# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/09 19:41:30 by tkeynes           #+#    #+#              #
#    Updated: 2017/08/16 21:49:43 by tkeynes          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_cat

SRC = ft_cat.c main.c ft_strlen.c

FLAGS = -Wall -Werror -Wextra

HEADERS = ft_cat.h ft_err.h

all:
	gcc $(FLAGS) -o $(NAME) $(SRC)
	gcc $(FLAGS) $(HEADERS)

clean:
		/bin/rm -f ft_cat.h.gch ft_err.h.gch

fclean: clean
		/bin/rm -f $(NAME)

re: fclean all
