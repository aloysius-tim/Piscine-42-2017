/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoblech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 01:35:25 by hsoblech          #+#    #+#             */
/*   Updated: 2017/08/23 03:11:15 by hsoblech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_print(t_map *map, int size, int compt)
{
	int i;
	int j;
	int b;
	int bool_;

	ft_print_init(&i, &j, &b, &bool_);
	while (++i < map->row)
	{
		while (++j < map->col)
		{
			if (map->tab[i][j] == 0)
				ft_putchar(map->obst);
			else if (bool_ && map->tab[i][j] == size)
			{
				bool_ = 0;
				ft_print_square_1(&b, &j, size, map->plein);
			}
			else if (b != -1 && (j == b) && (compt < size))
				ft_print_square_2(&compt, &j, size, map->plein);
			else
				ft_putchar(map->vide);
		}
		ft_putchar('\n');
		j = -1;
	}
}

void	ft_print_square_1(int *b, int *j, int size, char c)
{
	*b = *j;
	ft_putchar_loop(c, size);
	*j += size - 1;
}

void	ft_print_square_2(int *compt, int *j, int size, char c)
{
	(*compt)++;
	ft_putchar_loop(c, size);
	*j += size - 1;
}

void	ft_putchar_loop(char c, int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		ft_putchar(c);
		i++;
	}
}

void	ft_print_init(int *i, int *j, int *b, int *bool_)
{
	*i = -1;
	*j = -1;
	*b = -1;
	*bool_ = 1;
}
