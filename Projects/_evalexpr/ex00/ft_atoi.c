/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 13:20:41 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/19 20:37:41 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "util.h"

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
