# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/09 19:41:30 by tkeynes           #+#    #+#              #
#    Updated: 2017/08/12 17:16:31 by tkeynes          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c \
		srcs/ft_swap.c

OBJFILES = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

FLAGS = -Wall -Werror -Wextra

HEADERS = ./includes/
all:
	gcc $(FLAGS) -c $(SRC) -I $(HEADERS)
	ar rc $(NAME) $(OBJFILES)
	ranlib $(NAME)

clean:
		/bin/rm -f $(OBJFILES)

fclean: clean
		/bin/rm -f $(NAME)

re: fclean all
