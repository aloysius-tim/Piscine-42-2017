/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 17:40:31 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/16 23:27:04 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"
#include "ft_cat.h"

int		ft_str_is_numeric(char *str)
{
	if (*str == '\0')
		return (1);
	if (*str == '-' || *str == '+')
		str++;
	while (*str != '\0')
	{
		if (!((*str >= '0' && *str <= '9')))
			return (0);
		str++;
	}
	return (1);
}

int		ft_atoi(char *str)
{
	int		negatif;
	int		nb_final;
	long	nb_long;
	int		tmp;

	negatif = 1;
	nb_long = 0;
	while (*str <= 32)
		str++;
	if ((*str == '+') || (*str == '-'))
	{
		negatif = 1;
		str++;
	}
	while ((*str >= '0') && (*str <= '9'))
	{
		nb_long *= 10;
		tmp = *str - 48;
		nb_long += tmp;
		str++;
	}
	nb_final = nb_long * negatif;
	return (nb_final);
}

int		main(int argc, char *argv[])
{
	if (argc < 2)
		return (-1);
	else if (argv[1][0] != '-' || argv[1][1] != 'c')
	{
		write(2, "tail: illegal option -- ", 24);
		write(2, &argv[1][1], 1);
		write(2, "\n", 1);
	}
	else if (argc < 3)
		write(2, "tail: option requires an argument -- c\n", 39);
	else if (!ft_str_is_numeric(argv[2]))
	{
		write(2, "tail: illegal offset -- ", 24);
		write(2, argv[2], ft_strlen(argv[2]));
		write(2, "\n", 1);
	}
	else if ((argc == 3 && ft_strlen(argv[1]) == 2 && argv[1][1
] == 'c' && ft_str_is_numeric(argv[2])))
		ft_display_input();
	else if ((ft_strlen(argv[1]) == 2 && argv[1][1
] == 'c' && ft_str_is_numeric(argv[2])))
		ft_display_file(argv, ft_atoi(argv[2]), argc, argv[2][0]);
	return (0);
}
