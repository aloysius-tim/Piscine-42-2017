/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 13:03:29 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/06 01:15:58 by tkeynes          ###   ########.fr       */
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
	if (nb <= 1)
		return 0;
	return ft_is_div(nb, nb-1);
}



int main()
{
	printf("%d", ft_is_prime(-42));
printf("%d", ft_is_prime(0));
printf("%d", ft_is_prime(1));
printf("%d", ft_is_prime(2));
printf("%d", ft_is_prime(3));
printf("%d", ft_is_prime(4));
printf("%d", ft_is_prime(17));
printf("%d", ft_is_prime(104729));
printf("%d", ft_is_prime(146));
printf("%d", ft_is_prime(147));
printf("%d", ft_is_prime(148));
printf("%d", ft_is_prime(149));
printf("%d", ft_is_prime(289));
printf("%d", ft_is_prime(361));
printf("%d", ft_is_prime(529));
printf("%d", ft_is_prime(961));


	return 0;
}
