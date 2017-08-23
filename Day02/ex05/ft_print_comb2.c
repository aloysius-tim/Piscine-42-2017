/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/02 20:33:14 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/02 20:33:16 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c);

void	echo_number(int *nb, int *comb)
{
	ft_putchar(nb[0] + '0');
	ft_putchar(nb[1] + '0');
	ft_putchar(' ');
	ft_putchar(nb[2] + '0');
	ft_putchar(nb[3] + '0');
	if (comb[1] + comb[0] != 197)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	iteration_two(int *comb, int *nb)
{
	while (comb[1] < 100)
	{
		if (comb[0] < comb[1])
		{
			echo_number(nb, comb);
		}
		if (nb[3] == 9)
		{
			nb[3] = 0;
			nb[2]++;
		}
		else
		{
			nb[3]++;
		}
		comb[1] = nb[2] * 10 + nb[3];
	}
}

void	iteration_one(int *comb, int *nb)
{
	while (comb[0] < 98)
	{
		if (comb[1] == 100)
		{
			nb[2] = 0;
			nb[3] = 2;
		}
		comb[0] = nb[0] * 10 + nb[1];
		comb[1] = nb[2] * 10 + nb[3];
		iteration_two(comb, nb);
		if (nb[1] == 9)
		{
			nb[1] = 0;
			nb[0]++;
		}
		else
		{
			nb[1]++;
		}
	}
}

void	ft_print_comb2(void)
{
	int nb[5];
	int comb[3];

	nb[0] = 0;
	nb[1] = 0;
	nb[2] = 0;
	nb[3] = 1;
	comb[0] = 0;
	comb[1] = 1;
	iteration_one(comb, nb);
}
