# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/09 19:41:30 by tkeynes           #+#    #+#              #
#    Updated: 2017/08/10 03:11:40 by tkeynes          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op

SRC = ft_putchar.c ft_putstr.c ft_putnbr.c ft_atoi.c ft_do_op.c ft_operations.c

FLAGS = -Wall -Werror -Wextra

HEADERS = ft_operations.h ft_do_op.h ft_putchar.h ft_putnbr.h

all:
	gcc $(FLAGS) -o $(NAME) $(SRC)
	gcc $(FLAGS) $(HEADERS)

clean:
		/bin/rm -f $(NAME) ft_operations.h.gch ft_do_op.h.gch ft_putchar.h.gch \
			ft_putnbr.h.gch
