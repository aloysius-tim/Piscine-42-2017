/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 11:00:53 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/06 01:02:31 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_fibonacci(int index)
{
	if (index < 0)
		return -1;
	else if (index == 0)
		return 0;
	else if (index == 1 || index == 2)
		return 1;
	return (ft_fibonacci(index-1) + ft_fibonacci(index-2));
}

int main()
{
	printf("%d\n", ft_fibonacci(0));
	printf("%d\n", ft_fibonacci(1));
	printf("%d\n", ft_fibonacci(2));
	printf("%d\n", ft_fibonacci(3));
	printf("%d\n", ft_fibonacci(6));

	return 0;
}
