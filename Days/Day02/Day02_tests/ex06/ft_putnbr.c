/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/02 20:33:33 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/04 10:29:07 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_putnbr(int nb)
{
	int		counter_buffer;
	char	buffer[1000000];

	counter_buffer = 0;
	if (nb < -2147483647 || nb > 2147483647)
		return ;
	if (nb < 0)
	{
		nb *= -1;
		ft_putchar('-');
	}
	if (nb == 0)
		ft_putchar('0');
	while (nb)
	{
		buffer[counter_buffer] = nb % 10 + '0';
		counter_buffer++;
		nb /= 10;
	}
	while (counter_buffer != 0)
	{
		ft_putchar(buffer[counter_buffer - 1]);
		counter_buffer--;
	}
}

int main(void)
{
	ft_putnbr(00);
	ft_putnbr(-1532827138);
	ft_putnbr(2147483649);
	ft_putnbr(-2147483647);
	return 0;
}
