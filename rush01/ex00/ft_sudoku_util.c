/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sudoku_util.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 23:05:06 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/13 21:50:55 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./headers/ft_sudoku_util.h"

int		**ft_allocate_map(void)
{
	int	counter;
	int	**map;

	counter = 0;
	map = (int **)malloc(sizeof(int *) * 9);
	while (counter != 9)
	{
		map[counter] = (int *)malloc(sizeof(int) * 9);
		counter++;
	}
	return (map);
}

int		**ft_clone_map(int **old)
{
	int		**new;
	int		i;
	int		j;

	i = 0;
	j = 0;
	new = ft_allocate_map();
	while (i < 9)
	{
		while (j < 9)
		{
			new[i][j] = old[i][j];
			j++;
		}
		j = 0;
		i++;
	}
	return (new);
}

t_bool	ft_is_verified(int **map)
{
	int i;
	int nb;
	int x;
	int y;

	nb = 1;
	i = 0;
	while (i < 81)
	{
		x = i / 9;
		y = i % 9;
		while (nb < 10)
		{
			if ((!ft_check_row(x, nb, map) || !ft_check_column(y, nb, map
) || !ft_check_bloc(nb, x, y, map)))
				return (FALSE);
			nb++;
		}
		nb = 1;
		i++;
	}
	return (TRUE);
}

void	ft_print_map(int **map)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i != 9)
	{
		while (j != 9)
		{
			ft_putchar(map[i][j] + '0');
			if (j != 8)
				ft_putchar(' ');
			j++;
		}
		j = 0;
		ft_putchar('\n');
		i++;
	}
}

int		**ft_init_map(char *argv[])
{
	int		counter1;
	int		counter2;
	char	*current_line;
	int		**map;

	counter1 = 0;
	counter2 = 0;
	map = ft_allocate_map();
	while (counter1 != 9)
	{
		current_line = argv[counter1 + 1];
		while (counter2 != 9)
		{
			if (*current_line == '.')
				map[counter1][counter2] = 0;
			else
				map[counter1][counter2] = (*current_line) - '0';
			current_line++;
			counter2++;
		}
		counter2 = 0;
		counter1++;
	}
	return (map);
}
