/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 22:26:35 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/20 23:17:04 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush00.h"

void	ft_print_top00(int x, char *final)
{
	ft_putchar('o', final);
	if (x != 1)
		ft_print_x_char('-', x - 2, final);
	if (x >= 2)
		ft_putchar('o', final);
	ft_putchar('\n', final);
}

void	ft_print_side00(int x, int y, char *final)
{
	ft_putchar('|', final);
	if (y == 1 || x == 1)
	{
		ft_putchar('\n', final);
		return ;
	}
	ft_print_x_char(' ', x - 2, final);
	ft_putchar('|', final);
	ft_putchar('\n', final);
}

char	*rush00(int x, int y)
{
	int		tmp_y;
	char	*final;

	final = (char *)malloc(sizeof(char) * (x * y + y + 1));
	tmp_y = y;
	if (x <= 0 || y <= 0)
		return (NULL);
	ft_print_top00(x, final);
	while (tmp_y > 2 && y != 1)
	{
		ft_print_side00(x, y, final);
		tmp_y--;
	}
	if (y != 1)
		ft_print_top00(x, final);
	return (final);
}
