/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/02 10:26:40 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/02 10:34:01 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1,		 &c, 1);
	return (0);
}

void		ft_print_numbers(void)
{
	char counter;
	counter='0';
	while (counter<='9')
	{
		ft_putchar(counter);
		counter++;
	}
}

int			main()
{
	ft_print_numbers();
	return (0);
}
