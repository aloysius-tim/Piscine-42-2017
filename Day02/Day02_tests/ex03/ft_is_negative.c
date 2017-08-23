/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/02 10:41:39 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/02 10:45:41 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1,		 &c, 1);
	return (0);
}

void	ft_is_negative(int n)
{
	if(n < 0)
		ft_putchar('N');
	else
		ft_putchar('P');
}

int		main(void)
{
	ft_is_negative(-1);
	ft_is_negative(1);
	return (0);
}
