/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 02:26:41 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/08 20:45:57 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_ultimate_range(int **range, int min, int max);

void test(int min, int max)
{
	int len;
	int *tab = NULL;
	int counter = 0;

	len = ft_ultimate_range(&tab, min, max);
	printf("%d\n", len);

	while (counter != 30)
	{
		printf("%d\n", tab[counter]);
		counter++;
	}
}

int main(int argc, char *argv[])
{
	int i;

	test(-5, -1);
	return 0;
}
