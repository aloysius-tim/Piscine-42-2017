/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/06 04:25:18 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/07 22:02:45 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int		main(void)
{
	char test[100] = "this 6";
	printf("%d\n", ft_strlcat(test, "this is 10", 5));
	printf("%s\n", test);

	char test2[100] = "this 6";
	printf("%lu\n", strlcat(test2, "this is 10", 5));
	printf("%s\n", test2);

	char test3[100] = "this 6";
	printf("%d\n", ft_strlcat(test3, "this is 10", 0));
	printf("%s\n", test3);

	char test4[100] = "this 6";
	printf("%lu\n", strlcat(test4, "this is 10", 0));
	printf("%s\n", test4);


	//ft_strlcat('this 6', 'this is 10', 5)

	return 0;
}
