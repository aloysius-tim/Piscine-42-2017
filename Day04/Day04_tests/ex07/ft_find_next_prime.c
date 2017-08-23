/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 13:12:16 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/04 13:19:14 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_is_div(int nb, int div)
{
	if (div == 1)
		return 1;
	if (nb % div ==0)
		return 0;
	return (ft_is_div(nb, div-1));
}

int ft_is_prime(int nb)
{
	if (nb == 0 || nb == 1)
		return 0;
	return ft_is_div(nb, nb-1);
}

int ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) != 1)
		nb++;
	return nb;
}

int main()
{
	printf("%d", ft_find_next_prime(74));
	return 0;
}
