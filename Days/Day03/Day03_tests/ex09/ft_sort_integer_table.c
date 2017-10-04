/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 13:58:21 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/03 15:05:43 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include <unistd.h>

void	ft_sort_integer_table(int *tab, int size)
{
	int c;
	int d;
	int swap;

	c = 0;
	d = 1;
	while (c < size)
	{
		d = c + 1;
		while (d < size)
		{
			if (*(tab + c) > *(tab + d))
			{
				swap = *(tab + c);
				*(tab + c) = *(tab + d);
				*(tab + d) = swap;
			}
			++d;
		}
		++c;
	}
}

int main(void)
{
	int tab[5];
	int tmp;

	tmp=0;
	tab[0]=1;
	tab[1]=-55;
	tab[2]=10;
	tab[3]=5;
	tab[4]=-2;
	ft_sort_integer_table(tab, 5);
	while(tmp < 5)
	{
		printf("%d\n", tab[tmp]);
		tmp++;
	}

	return 0;
}
