/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolve.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoblech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 03:12:10 by hsoblech          #+#    #+#             */
/*   Updated: 2017/08/23 21:51:35 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_bsq(t_map *map)
{
	int size;

	if (!map || !(map->tab))
	{
		ft_puterror("map error");
		return (0);
	}
	size = ft_resolve(map);
	ft_print(map, size, 1);
	return (1);
}

void	ft_clean_tab(int x, int **tab)
{
	while (x >= 0)
	{
		free(tab[x]);
		x--;
	}
	free(tab);
}

int		ft_resolve(t_map *map)
{
	int i;
	int j;
	int size;

	i = map->row;
	j = map->col;
	size = 0;
	while (--i >= 0)
	{
		while (--j >= 0)
		{
			if (map->tab[i][j])
			{
				if ((map->tab[i][j] = (1 + min(map->tab[i][j + 1],
					map->tab[i + 1][j], map->tab[i + 1][j + 1]))) > size)
				{
					size = 1 + min(map->tab[i][j + 1], map->tab[i + 1][j],
							map->tab[i + 1][j + 1]);
				}
			}
		}
		j = map->col;
	}
	return (size);
}

void	ft_puterror(char *str)
{
	write(2, str, ft_strlen(str));
}
