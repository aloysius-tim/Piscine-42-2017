/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 16:33:18 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/23 20:07:01 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

t_map	*ft_parse_map(char *str)
{
	t_map	*map;
	int		col;
	char	*head;
	int		size_first;

	map = malloc(sizeof(t_map));
	col = 0;
	head = str;
	if (!str || ft_strlen(str) < 6)
		return (0);
	ft_parse_map_first_line(map, str, &size_first);
	str += size_first;
	if (*str != '\n')
		return (0);
	if (!ft_get_map_col(str++, map))
		return (0);
	map->tab = ft_parse_tab(ft_init_tab(map->row + 1, map->col + 1),
		head, map, 0);
	return (map);
}

void	ft_parse_map_first_line(t_map *map, char *str, int *size)
{
	int size_line;

	size_line = ft_strlen_to_newline(str);
	map->plein = str[size_line - 1];
	map->obst = str[size_line - 2];
	map->vide = str[size_line - 3];
	str[size_line - 3] = ' ';
	map->row = ft_atoi(str);
	map->col = 0;
	*size = ft_strlen_to_newline(str);
}

int		ft_get_map_col(char *str, t_map *map)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	str++;
	while (j < map->row)
	{
		while (str[i] && str[i] != '\n')
		{
			if (str[i] != map->vide && str[i] != map->obst)
				return (0);
			i++;
		}
		if (str[i] && str[i] != '\n')
			return (0);
		if (map->col && map->col != i)
			return (0);
		map->col = i;
		j++;
	}
	return (map->col > 0);
}

int		**ft_parse_tab(int **tab, char *str, t_map *map, int s)
{
	int	i;
	int	j;

	ft_parse_tab_init(&i, &j);
	i = -1;
	while (*str && *str != '\n')
		str++;
	str++;
	while (str[s] && i++ < map->row)
	{
		while (str[s] && j++ < map->col)
		{
			if (str[s] == map->vide)
				tab[i][j] = 1;
			else if (str[s] == map->obst || str[s] == '\n')
				tab[i][j] = 0;
			s++;
		}
		if (s != ((map->col + 1) * (i + 1)))
			return (0);
		j = -1;
	}
	return (tab);
}

void	ft_parse_tab_init(int *i, int *j)
{
	*i = -1;
	*j = -1;
}
