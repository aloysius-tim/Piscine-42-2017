/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 22:40:06 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/11 01:00:44 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_destroy(char ***factory);

char	*ft_strcpy(char *dest, char *src)
{
	int counter;

	counter = 0;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		counter++;
	}
	*dest = '\0';
	return (dest - counter);
}

int main()
{
	char ***factory;
	int i;
	int j;

	factory = (char ***)malloc(sizeof(char **) * 10);

	for (i = 0; i < 9; i++)
	{
		factory[i] = (char **)malloc(sizeof(char *) * 10);
		for (j = 0; j < 9; j++)
		{
			factory[i][j] = (char *)malloc(sizeof(char) * 10);
			ft_strcpy(factory[i][j], "Binjour");
		}
		factory[i][9] = NULL;
	}
	factory[9] = NULL;
	ft_destroy(factory);

	while (1)
		;
	/*for (i = 0; i < 10; i++)
		printf("%s\n", factory[0][i]);
	//printf("%d\n", 42);*/
	return (0);
}
