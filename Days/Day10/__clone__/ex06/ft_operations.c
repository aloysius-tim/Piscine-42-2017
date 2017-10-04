/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operations.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 23:02:02 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/10 02:49:01 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_operations.h"

void		div(int a, int b)
{
	if (b == 0)
	{
		ft_putstr("Stop : division by zero");
		return ;
	}
	ft_putnbr(a / b);
}

void		plus(int a, int b)
{
	ft_putnbr(a + b);
}

void		minus(int a, int b)
{
	ft_putnbr(a - b);
}

void		mod(int a, int b)
{
	if (b == 0)
	{
		ft_putstr("Stop : modulo by zero");
		return ;
	}
	ft_putnbr(a % b);
}

void		multi(int a, int b)
{
	ft_putnbr(a * b);
}
