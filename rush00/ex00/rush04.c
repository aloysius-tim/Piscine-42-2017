/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 22:26:35 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/06 15:20:27 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

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
	ft_putchar('A');
	if (x != 1)
		ft_print_x_char('B', x - 2);
	if (x >= 2)
		ft_putchar('C');
	ft_putchar('\n');
}

void	ft_print_bottom(int x)
{
	ft_putchar('C');
	if (x != 1)
		ft_print_x_char('B', x - 2);
	if (x >= 2)
		ft_putchar('A');
	ft_putchar('\n');
}

void	ft_print_side(int x, int y)
{
	ft_putchar('B');
	if (y == 1 || x == 1)
	{
		ft_putchar('\n');
		return ;
	}
	ft_print_x_char(' ', x - 2);
	ft_putchar('B');
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
