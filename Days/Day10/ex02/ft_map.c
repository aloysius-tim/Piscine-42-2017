/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 21:34:30 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/10 02:40:48 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int *final;
	int counter;

	counter = 0;
	final = malloc(sizeof(int) * length);
	while (counter != length)
	{
		final[counter] = f(tab[counter]);
		counter++;
	}
	return (final);
}
