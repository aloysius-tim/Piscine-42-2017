/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoblech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 01:30:32 by hsoblech          #+#    #+#             */
/*   Updated: 2017/08/23 08:44:23 by hsoblech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_size_number(int a)
{
	int i;

	i = 1;
	while (a /= 10)
		i++;
	return (i);
}

int		min(int a, int b, int c)
{
	if (a <= b && a <= c)
		return (a);
	else if (b <= a && b <= c)
		return (b);
	else
		return (c);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		**ft_init_tab(int row, int col)
{
	int **tab;
	int i;
	int j;

	i = 0;
	j = 0;
	tab = (int**)malloc(sizeof(int*) * row);
	while (i < row)
	{
		tab[i] = (int*)malloc(sizeof(int) * col);
		while (j < col)
		{
			tab[i][j] = 0;
			j++;
		}
		j = 0;
		i++;
	}
	return (tab);
}
