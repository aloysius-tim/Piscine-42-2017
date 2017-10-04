/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 02:21:29 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/08 14:30:26 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int				*tab;
	int				counter;
	unsigned int	diff;

	diff = max - min;
	tab = (int *)malloc(sizeof(int) * (diff));
	counter = 0;
	if (min >= max)
		return (NULL);
	while (min < max)
	{
		tab[counter] = min;
		min++;
		counter++;
	}
	return (tab);
}
