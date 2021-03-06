/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 22:26:35 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/20 21:59:18 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_colle00.h"

void	ft_print_x_char(char c, int n)
{
	while (n != 0)
	{
		ft_putchar(c);
		n--;
	}
}

void	ft_print_top(int x)
{
	ft_putchar('/');
	if (x != 1)
		ft_print_x_char('*', x - 2);
	if (x >= 2)
		ft_putchar('\\');
	ft_putchar('\n');
}

void	ft_print_bottom(int x)
{
	ft_putchar('\\');
	if (x != 1)
		ft_print_x_char('*', x - 2);
	if (x >= 2)
		ft_putchar('/');
	ft_putchar('\n');
}

void	ft_print_side(int x, int y)
{
	ft_putchar('*');
	if (y == 1 || x == 1)
	{
		ft_putchar('\n');
		return ;
	}
	ft_print_x_char(' ', x - 2);
	ft_putchar('*');
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int tmp_y;

	tmp_y = y;
	if (x <= 0 || y <= 0)
		return ;
	ft_print_top(x);
	while (tmp_y > 2 && y != 1)
	{
		ft_print_side(x, y);
		tmp_y--;
	}
	if (y != 1)
		ft_print_bottom(x);
}
