# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/09 19:41:30 by tkeynes           #+#    #+#              #
#    Updated: 2017/08/20 21:44:53 by tkeynes          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = colle-2

SRC = ft_list.c ft_string.c ./rush00/rush00.c ./rush00/rush01.c \
./rush00/rush02.c ./rush00/rush03.c ./rush00/rush04.c ft_itoa.c ft_strlen.c \
ft_strcmp.c  ./main.c

OBJFILES =

FLAGS = -Wall -Werror -Wextra

all:
	gcc $(FLAGS) -o $(NAME) $(SRC)

clean:
		/bin/rm -f $(OBJFILES)

fclean: clean
		/bin/rm -f $(NAME)

re: fclean all
