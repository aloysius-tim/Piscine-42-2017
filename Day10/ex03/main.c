/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 21:54:57 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/09 22:03:09 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int ft_any(char **tab, int(*f)(char*));

int test(char *a)
{
	if (*a == 'a')
		return 1;
	return 0;
}

int main()
{
	char **tab;
	int counter = 0;

	tab = malloc(sizeof(char*) * 6);
	while (counter != 5)
	{
		tab[counter] = "a";
		counter++;
	}
	tab[counter] = 0;

	printf("%d", ft_any(tab, test));
	return 0;
}
