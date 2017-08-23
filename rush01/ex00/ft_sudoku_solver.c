/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sudoku.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 22:41:52 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/13 21:55:15 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./headers/ft_sudoku_solver.h"

t_bool	ft_is_on_row(int row, int val, int **map)
{
	int counter;

	counter = 0;
	while (counter != 9)
	{
		if (map[row][counter])
		{
			if (map[row][counter] == val)
				return (TRUE);
		}
		counter++;
	}
	return (FALSE);
}

t_bool	ft_is_on_colunm(int column, int val, int **map)
{
	int counter;

	counter = 0;
	while (counter != 9)
	{
		if (map[counter][column])
		{
			if (map[counter][column] == val)
				return (TRUE);
		}
		counter++;
	}
	return (FALSE);
}

t_bool	ft_is_on_bloc(int val, int bloc_x, int bloc_y, int **map)
{
	int x;
	int y;

	x = bloc_x - (bloc_x % 3);
	y = bloc_y - (bloc_y % 3);
	bloc_x = x;
	bloc_y = y;
	while (x < bloc_x + 3)
	{
		while (y < bloc_y + 3)
		{
			if (map[x][y] == val)
				return (TRUE);
			y++;
		}
		y = bloc_y - (bloc_y % 3);
		x++;
	}
	return (FALSE);
}

t_bool	ft_solve_map(int **map, int current_position, int *nb_solutions)
{
	int nb;

	if (current_position == 81)
		return (TRUE);
	nb = 1;
	if (map[current_position / 9][current_position % 9] != 0)
		return (ft_solve_map(map, current_position + 1, nb_solutions));
	while (nb != 10)
	{
		if ((!ft_is_on_row(current_position / 9, nb, map) && !ft_is_on_colunm(
current_position % 9, nb, map) && !ft_is_on_bloc(nb, current_position / 9
, current_position % 9, map)))
		{
			map[current_position / 9][current_position % 9] = nb;
			if (ft_solve_map(map, current_position + 1, nb_solutions))
			{
				(*nb_solutions)++;
				g_map = ft_clone_map(map);
				ft_solve_map(map, current_position + 1, nb_solutions);
			}
		}
		nb++;
	}
	map[current_position / 9][current_position % 9] = 0;
	return (FALSE);
}

void	ft_sudoku(char *argv[])
{
	int		**map;
	int		x;
	int		*nb_solutions;
	t_bool	is_solved;

	nb_solutions = malloc(sizeof(int));
	*nb_solutions = 0;
	x = -1;
	map = ft_init_map(argv);
	if (ft_is_verified(map) == 1)
		is_solved = ft_solve_map(map, 0, nb_solutions);
	if (*nb_solutions == 1)
		ft_print_map(g_map);
	else
		ft_putstr("Error\n");
	while (++x != 9)
	{
		if (*nb_solutions == 1)
			free(g_map[x]);
		free(map[x]);
	}
	free(g_map);
	free(map);
}
