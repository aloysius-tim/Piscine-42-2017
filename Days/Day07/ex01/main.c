/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 02:26:41 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/07 03:02:11 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int *ft_range(int min, int max);

int main ()
{
	int *tab;
	int counter = 5;
	tab = ft_range(10, 15);
	//printf("%d", tab[0]);
	while (counter >= 0)
	{
		printf("%d ", tab[counter]);
		counter--;
	}
	return (0);
}
