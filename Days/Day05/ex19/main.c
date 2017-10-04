/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/06 15:05:26 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/06 15:30:58 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int		main(void)
{
	char test[20] = "Bonjour ";
	char test2[20] = "Bonjour ";
	printf("%d\n", ft_strlcpy(test, "42 test", 20));
	printf("%s\n", test);
	printf("%lu\n", strlcpy(test2, "42 test", 20));
	printf("%s\n", test2);

	char test3[20] = "Bonjour ";
	char test4[20] = "Bonjour ";
	printf("%d\n", ft_strlcpy(test3, "423 test", 3));
	printf("%s\n", test3);
	printf("%lu\n", strlcpy(test4, "423 test", 3));
	printf("%s\n", test4);



	return (0);
}
