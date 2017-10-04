/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 23:52:28 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/06 19:54:22 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_putchar(char c);
int		g_size_pyramide;
int		g_nb_spaces;
int		g_minus_space;

void	ft_print_x_char(char c, int n)
{
	while (n != 0)
	{
		ft_putchar(c);
		n--;
	}
}

int		ft_base_size(int floor, int last_stars_nb, int nb_step_floor)
{
	int nb_stars;

	if (floor == g_size_pyramide)
		nb_stars = 1;
	else
	{
		if (nb_step_floor % 2 == 0)
			nb_stars = last_stars_nb + nb_step_floor + 2;
		else
			nb_stars = last_stars_nb + nb_step_floor + 1;
	}
	while (nb_step_floor > 0)
	{
		nb_stars += 2;
		nb_step_floor--;
	}
	return (nb_stars -= 2);
}

void	ft_print_step(int nb_spaces, int nb_stars, int nb_step_floor, int floor)
{
	int porte_size;

	porte_size = (g_size_pyramide % 2 == 0) ?
g_size_pyramide - 1 : g_size_pyramide;
	ft_print_x_char(' ', nb_spaces);
	ft_putchar('/');
	if (floor != 1 || (floor == 1 && ((nb_step_floor > g_size_pyramide - 1 &&
(g_size_pyramide % 2 == 0)) ||
(nb_step_floor > g_size_pyramide && g_size_pyramide % 2 != 0))))
		ft_print_x_char('*', nb_stars);
	else
	{
		ft_print_x_char('*', nb_stars / 2 - porte_size / 2);
		if (nb_step_floor == porte_size / 2 + 1 && g_size_pyramide > 4)
		{
			ft_print_x_char('|', porte_size - 2);
			ft_putchar('$');
			ft_putchar('|');
		}
		else
			ft_print_x_char('|', porte_size);
		ft_print_x_char('*', nb_stars / 2 - porte_size / 2);
	}
	ft_putchar('\\');
	ft_putchar('\n');
}

int		ft_pyramide(int floor, int last_stars_nb,
int nb_step_floor, int base_size)
{
	int nb_stars;

	if (floor == g_size_pyramide)
	{
		nb_stars = 1;
		g_nb_spaces = base_size / 2 - 1;
	}
	else
	{
		if (nb_step_floor % 2 == 0)
		{
			nb_stars = last_stars_nb + nb_step_floor + 2;
			g_nb_spaces -= ++g_minus_space;
		}
		else
		{
			nb_stars = last_stars_nb + nb_step_floor + 1;
			g_nb_spaces -= g_minus_space;
		}
	}
	while (nb_step_floor > 0 && (nb_stars += 2))
		ft_print_step(g_nb_spaces--, nb_stars - 2, nb_step_floor--, floor);
	return (nb_stars -= 2);
}

void	sastantua(int size)
{
	int floor;
	int nb_stars;
	int nb_step_floor;
	int base_size;

	g_size_pyramide = size;
	g_minus_space = 2;
	nb_step_floor = 3;
	floor = size;
	if (size == 0)
		return ;
	while (floor > 0)
		base_size = ft_base_size(floor--, base_size, nb_step_floor++);
	g_minus_space = 2;
	nb_step_floor = 3;
	floor = size;
	while (floor > 0)
	{
		nb_stars = ft_pyramide(floor--, nb_stars, nb_step_floor, base_size + 1);
		g_nb_spaces++;
		nb_step_floor++;
	}
}
