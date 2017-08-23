/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/06 01:56:35 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/07 21:23:40 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int main(void)
{
	char dest[100];

	printf("%s\n", ft_strncpy(dest, "Bonjour", 12));
	printf("%s\n", strncpy(dest, "Bonjour", 12));
	printf("%s\n", ft_strncpy(dest, "Bonjour", 2));
	printf("%s\n", strncpy(dest, "Bonjour", 2));
	return 0;
}
