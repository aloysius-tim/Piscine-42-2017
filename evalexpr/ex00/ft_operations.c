/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operations.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 23:02:02 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/19 21:39:27 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_operations.h"

int		div_(int a, int b)
{
	if (b == 0)
	{
		ft_putstr("Stop : division by zero");
		return (0);
	}
	return (a / b);
}

int		plus_(int a, int b)
{
	return (a + b);
}

int		minus_(int a, int b)
{
	return (a - b);
}

int		mod_(int a, int b)
{
	if (b == 0)
	{
		ft_putstr("Stop : modulo by zero");
		return (0);
	}
	return (a % b);
}

int		multi_(int a, int b)
{
	return (a * b);
}
