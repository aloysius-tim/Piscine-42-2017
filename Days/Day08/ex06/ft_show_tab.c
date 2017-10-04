/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 23:47:05 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/09 01:22:06 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

void	ft_print_words_tables(char **tab)
{
	while (*tab != '\0')
	{
		ft_putstr(*(tab));
		if (*(tab + 1) != '\0')
			ft_putchar('\n');
		(tab++);
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		ft_putstr("-2147483648");
	else if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + '0');
	}
	else if (nb != -2147483648)
		ft_putchar(nb + '0');
}

void	ft_show_tab(struct s_stock_par *par)
{
	while (par->str != 0)
	{
		ft_putstr(par->str);
		ft_putchar('\n');
		ft_putnbr(par->size_param);
		ft_putchar('\n');
		ft_print_words_tables(par->tab);
		ft_putchar('\n');
		par++;
	}
}
