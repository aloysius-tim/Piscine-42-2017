# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/09 19:41:30 by tkeynes           #+#    #+#              #
#    Updated: 2017/08/15 17:51:27 by tkeynes          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRC = ft_display_file.c main.c

FLAGS = -Wall -Werror -Wextra

HEADERS = ft_display_file.h

all:
	gcc $(FLAGS) -o $(NAME) $(SRC)
	gcc $(FLAGS) $(HEADERS)

clean:
		/bin/rm -f ft_display_file.h.gch

fclean: clean
		/bin/rm -f $(NAME)

re: fclean all
