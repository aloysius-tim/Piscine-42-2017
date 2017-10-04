/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 21:39:39 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/09 21:49:23 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		*ft_map(int *tab, int length, int(*f)(int));

int test(int a)
{
	return a*10;
}

int main()
{
	int tab[5] = {0,1,2,3,4};
	int counter = 0;
	int *tab2;

	tab2 = ft_map(tab, 5, test);
	while(counter != 5)
	{
		printf("%d\n", tab2[counter]);
		counter++;
	}
	return (0);
}
