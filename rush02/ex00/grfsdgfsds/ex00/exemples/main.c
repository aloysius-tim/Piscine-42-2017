/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 22:23:49 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/20 21:58:53 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_colle00.h"

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
		if (*str == '-')
			negatif = -1;
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
	int x;
	int y;

	if (argc < 3)
		return (-1);
	x = ft_atoi(argv[1]);
	y = ft_atoi(argv[2]);
	rush(x, y);
	return (0);
}
