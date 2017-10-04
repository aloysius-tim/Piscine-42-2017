/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_decrypt.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 03:14:54 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/11 04:16:45 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_perso.h"
#include <stdlib.h>

int			ft_count_perso(char *str)
{
	int counter;

	counter = 0;
	while (*str)
	{
		if (*str == '|')
			counter++;
		str++;
	}
	return (counter);
}

int			ft_atoi(char *str)
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

int			ft_strlen(char *str)
{
	int counter;

	counter = 0;
	while (*str != ';' && *str != '\0')
	{
		counter++;
		str++;
	}
	return (counter);
}

char		*ft_strcpy(char *dest, char *src)
{
	int counter;

	counter = 0;
	while (*src != '\0' && *src != ';')
	{
		*dest = *src;
		dest++;
		src++;
		counter++;
	}
	*dest = '\0';
	return (dest - counter);
}

t_perso		**ft_decrypt(char *str)
{
	t_perso **final_tab;
	int		nb_perso;
	int		counter;
	int		name_size;

	name_size = 0;
	counter = 0;
	nb_perso = ft_count_perso(str);
	final_tab = (t_perso **)malloc(sizeof(t_perso *) * nb_perso + 1);
	while (counter != nb_perso)
	{
		final_tab[counter] = (t_perso *)malloc(sizeof(t_perso));
		final_tab[counter]->age = ft_atoi(str);
		while (*str != '|')
			str++;
		name_size = ft_strlen(++str);
		final_tab[counter]->name = (char *)malloc(sizeof(char) * name_size);
		ft_strcpy(final_tab[counter]->name, str);
		while (*str != ';')
			str++;
		str++;
		counter++;
	}
	final_tab[counter] = 0;
	return (final_tab);
}
