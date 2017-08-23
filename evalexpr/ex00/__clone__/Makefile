# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/09 19:41:30 by tkeynes           #+#    #+#              #
#    Updated: 2017/08/20 18:28:50 by tkeynes          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = eval_expr

SRC =  ft_check_format.c ft_list.c ft_putnbr.c ft_string.c ft_to_reverse_polish_notation.c ft_util.c ft_operations.c ft_atoi.c ft_itoa.c main.c ft_parse_input.c

OBJFILES =

FLAGS = -Wall -Werror -Wextra

all:
	gcc $(FLAGS) -o $(NAME) $(SRC)

clean:
		/bin/rm -f $(OBJFILES)

fclean: clean
		/bin/rm -f $(NAME)

re: fclean all
