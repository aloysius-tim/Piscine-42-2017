# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/20 21:48:07 by tkeynes           #+#    #+#              #
#    Updated: 2017/08/20 21:56:47 by tkeynes          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

R00 = colle_00
R01 = colle_01
R02 = colle_02
R03 = colle_03
R04 = colle_04
FLAGS = -Wall -Werror -Wextra

all: $(R00) $(R01) $(R02) $(R03) $(R04)

$(R00): $(R00).c
		gcc $(FLAGS) -o $(R00) $(R00).c main.c ft_putchar.c

$(R01): $(R01).c
		gcc $(FLAGS) -o $(R01) $(R01).c main.c ft_putchar.c

$(R02): $(R02).c
		gcc $(FLAGS) -o $(R02) $(R02).c main.c ft_putchar.c

$(R03): $(R03).c
		gcc $(FLAGS) -o $(R03) $(R03).c main.c ft_putchar.c

$(R04): $(R04).c
		gcc $(FLAGS) -o $(R04) $(R04).c main.c ft_putchar.c

fclean:
		/bin/rm -f $(R00)
		/bin/rm -f $(R01)
		/bin/rm -f $(R02)
		/bin/rm -f $(R02)
		/bin/rm -f $(R03)
		/bin/rm -f $(R04)
