/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 03:02:46 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/08 20:49:39 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int				counter;
	int				*tab;
	int				min_bis;
	int				diff;

	diff = 0;
	min_bis = min - 1;
	counter = 0;
	if (min >= max)
	{
		*range = (void*)0;
		return (0);
	}
	while (++min_bis < max)
		diff++;
	tab = (int*)malloc(sizeof(int) * (diff));
	counter = 0;
	while (min < max)
	{
		tab[counter] = min;
		min++;
		counter++;
	}
	*range = tab;
	return (counter);
}
