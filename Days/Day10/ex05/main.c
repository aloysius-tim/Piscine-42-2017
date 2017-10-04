/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 22:16:10 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/12 22:30:38 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_is_sort(int *tab, int length, int(*f)(int, int));

int test(int a, int b)
{
	return a - b;
}

int main ()
{
	int tab[5] = {1,2,3,1};
	printf("%d\n", ft_is_sort(tab, 4, test));
	return 0;
}
