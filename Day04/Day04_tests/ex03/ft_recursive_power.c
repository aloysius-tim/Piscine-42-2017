/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 10:53:46 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/04 10:59:55 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return 0;
	if (power == 0)
		return 1;
	if (power == 1)
		return nb;

	return nb * ft_recursive_power(nb, power-1);
}

int main()
{
	printf("%d", ft_recursive_power(5, 1));
	return 0;
}
