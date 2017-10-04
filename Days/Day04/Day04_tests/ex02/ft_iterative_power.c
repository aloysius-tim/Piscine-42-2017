/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 10:46:32 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/04 11:00:14 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_iterative_power(int nb, int power)
{
	int final;

	final = nb;
	if (power < 0)
		return 0;
	if (power == 0)
		return 1;

	while (power != 1)
	{
		final *= nb;
		power--;
	}

	return final;
}

int main(void)
{
	printf("%d", ft_iterative_power(5, 1));
	return 0;
}
