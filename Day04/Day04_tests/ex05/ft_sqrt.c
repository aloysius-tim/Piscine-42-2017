/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 11:57:23 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/04 13:03:02 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_dicho(int nb, int current)
{
	if (current * current > nb)
		return 0;
	if(current * current == nb)
		return current;
	return (ft_dicho(nb, current+1));
}

int ft_sqrt(int nb)
{
	if (nb <= 0)
		return (0);
	return ft_dicho(nb, 1);
}

int main()
{
	printf("%d", ft_sqrt(2));
	return 0;
}
