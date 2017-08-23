# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/09 19:41:30 by tkeynes           #+#    #+#              #
#    Updated: 2017/08/16 23:11:59 by tkeynes          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_tail

SRC = ft_tail.c main.c ft_strlen.c ft_cat.c

FLAGS = -Wall -Werror -Wextra

HEADERS = ft_tail.h ft_err.h ft_cat.h

all:
	gcc $(FLAGS) -o $(NAME) $(SRC)
	gcc $(FLAGS) $(HEADERS)

clean:
		/bin/rm -f ft_tail.h.gch ft_err.h.gch ft_cat.h.gch

fclean: clean
		/bin/rm -f $(NAME)

re: fclean all
