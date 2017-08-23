/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_last_check.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/13 21:19:00 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/13 21:45:05 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./headers/ft_last_check.h"

t_bool		ft_check_row(int row, int test, int **map)
{
	int c;
	int k;

	k = 0;
	c = 0;
	while (c != 9)
	{
		if (test == map[row][c])
			k++;
		c++;
	}
	if (k > 1)
		return (FALSE);
	return (TRUE);
}

t_bool		ft_check_column(int column, int test, int **map)
{
	int c;
	int k;

	k = 0;
	c = 0;
	while (c != 9)
	{
		if (test == map[c][column])
			k++;
		c++;
	}
	if (k > 1)
		return (FALSE);
	return (TRUE);
}

t_bool		ft_check_bloc(int test, int bloc_x, int bloc_y, int **map)
{
	int x;
	int y;
	int k;

	x = bloc_x - (bloc_x % 3);
	y = bloc_y - (bloc_y % 3);
	bloc_x = x;
	bloc_y = y;
	k = 0;
	while (x < bloc_x + 3)
	{
		while (y < bloc_y + 3)
		{
			if (test == map[x][y])
				k++;
			y++;
		}
		y = bloc_y - (bloc_y % 3);
		x++;
	}
	if (k > 1)
		return (FALSE);
	return (TRUE);
}

t_bool		ft_check_one_solution(char *argv[])
{
	int counter;
	int i;
	int j;

	counter = 0;
	i = 0;
	j = 0;
	while (argv[i] != '\0')
	{
		while (argv[i][j] != '\0')
		{
			if (argv[i][j] >= '1' && argv[i][j] <= '9')
				counter++;
			j++;
		}
		j = 0;
		i++;
	}
	if (counter < 17)
		return (FALSE);
	return (TRUE);
}

t_bool		ft_check_valid_map(int argc, char *argv[])
{
	int	counter;
	int	counter1;

	counter1 = 0;
	counter = 1;
	if (argc != 10)
		return (FALSE);
	while (counter != 10)
	{
		if (ft_strlen(argv[counter]) != 9)
			return (FALSE);
		while (argv[counter][counter1] != '\0')
		{
			if (argv[counter][counter1] != '.' && (argv[counter][counter1
] < '1' || argv[counter][counter1] > '9'))
				return (FALSE);
			counter1++;
		}
		counter1 = 0;
		counter++;
	}
	return (TRUE);
}
