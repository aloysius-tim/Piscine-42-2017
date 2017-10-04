/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/06 02:32:30 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/06 02:43:39 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n);

int		main(void)
{
	printf("%d\n", ft_strncmp("Bonjour", "Bonjour", 50));
	printf("%d\n", strncmp("Bonjour", "Bonjour", 50));
	printf("%d\n", ft_strncmp("Bonjour", "BonJour", 0));
	printf("%d\n", strncmp("Bonjour", "BonJour", 0));
	printf("%d\n", ft_strncmp("BonJour", "Bonjour", 2));
	printf("%d\n", strncmp("BonJour", "Bonjour", 2));
	printf("%d\n", ft_strncmp("", "Bonjour", 2));
	printf("%d\n", strncmp("", "Bonjour", 2));
	printf("%d\n", ft_strncmp("Bonjour", "", 2));
	printf("%d\n", strncmp("Bonjour", "", 2));
	printf("%d\n", ft_strncmp("", "", 2));
	printf("%d\n", strncmp("", "", 2));
	return 0;
}
