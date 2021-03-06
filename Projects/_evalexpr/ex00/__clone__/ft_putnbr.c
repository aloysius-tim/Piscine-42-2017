/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/06 01:42:50 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/19 12:14:54 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_util.h"

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
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
