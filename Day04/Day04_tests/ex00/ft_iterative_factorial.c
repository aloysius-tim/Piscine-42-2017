/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 17:16:36 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/04 12:17:29 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int		ft_iterative_factorial(int nb)
{
	int count;
	int tmp;

	count = nb;
	tmp = 0;
	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 0)
		return (1);
	while (nb != 1)
	{
		nb--;
		tmp = nb;
		count *= tmp;
	}
	return (count);
}

int		main(void)
{
	printf("%d", ft_iterative_factorial(5));
	printf("%d", ft_iterative_factorial(1));
	printf("%d", ft_iterative_factorial(0));
	printf("%d", ft_iterative_factorial(-5));
	return (0);
}
