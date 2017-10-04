/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/06 02:32:30 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/06 20:58:49 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strcmp(char *s1, char *s2);

int		main(void)
{
	printf("%d\n", ft_strcmp("Bonjour", "Bonjour"));
	printf("%d\n", strcmp("Bonjour", "Bonjour"));
	printf("%d\n", ft_strcmp("Bonjour", "BonJour"));
	printf("%d\n", strcmp("Bonjour", "BonJour"));
	printf("%d\n", ft_strcmp("BonJour", "Bonjour"));
	printf("%d\n", strcmp("BonJour", "Bonjour"));
	printf("%d\n", ft_strcmp("", "Bonjour"));
	printf("%d\n", strcmp("", "Bonjour"));
	printf("%d\n", ft_strcmp("Bonjour", ""));
	printf("%d\n", strcmp("Bonjour", ""));
	printf("%d\n", ft_strcmp("ABCDEF", "ABCD"));
	printf("%d\n", strcmp("ABCDEF", "ABCD"));
	return 0;
}
