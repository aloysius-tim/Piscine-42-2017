# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/09 19:41:30 by tkeynes           #+#    #+#              #
#    Updated: 2017/08/17 05:46:47 by tkeynes          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_hexdump

SRC = ft_nbr_str_base.c ft_strlen.c ft_atoi.c ft_hexdump.c ft_strcat.c main.c

FLAGS = -Wall -Werror -Wextra

HEADERS = ft_hexdump.h ft_nbr_str_base.h

all:
	gcc $(FLAGS) -o $(NAME) $(SRC)
	gcc $(FLAGS) $(HEADERS)

clean:
		/bin/rm -f ft_hexdump.h.gch ft_nbr_str_base.h.gch

fclean: clean
		/bin/rm -f $(NAME)

re: fclean all
