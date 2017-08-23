/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/02 20:32:53 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/03 20:00:10 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c);

void	print_three_char(int a, int b, int c)
{
	ft_putchar(a + '0');
	ft_putchar(b + '0');
	ft_putchar(c + '0');
	if (a * 100 + b * 10 + c != 789)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	iteration_three(int *tab_num, int *iterations, int *max_iteration)
{
	while (iterations[2] < max_iteration[2])
	{
		print_three_char(tab_num[0], tab_num[1], tab_num[2]);
		tab_num[2]++;
		iterations[2]++;
		if (tab_num[2] == 10)
		{
			iterations[2] = 1;
			max_iteration[2] -= 2;
			break ;
		}
	}
}

void	iteration_two(int *tab_num, int *iterations, int *max_iteration)
{
	while (iterations[1] < max_iteration[1])
	{
		max_iteration[2] = max_iteration[1] + 1;
		tab_num[2] = tab_num[1] + 1;
		iteration_three(tab_num, iterations, max_iteration);
		tab_num[1]++;
		iterations[1]++;
		if (tab_num[1] == 9)
		{
			iterations[1] = 1;
			max_iteration[1]--;
			break ;
		}
	}
	iterations[0]++;
	tab_num[0]++;
	max_iteration[1] = max_iteration[0] + 1;
	tab_num[1] = tab_num[0] + 1;
}

void	ft_print_comb(void)
{
	int tab_num[4];
	int iterations[4];
	int max_iteration[4];

	tab_num[0] = 0;
	tab_num[1] = 1;
	tab_num[2] = 2;
	iterations[0] = 1;
	iterations[1] = 1;
	iterations[2] = 1;
	max_iteration[2] = 9;
	max_iteration[0] = 7;
	max_iteration[1] = 9;
	while (tab_num[0] != 8)
	{
		iteration_two(tab_num, iterations, max_iteration);
	}
}
