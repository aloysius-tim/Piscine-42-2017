/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 23:23:54 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/08 14:47:19 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int counter;

	counter = 0;
	while (*str != '\0')
	{
		counter++;
		str++;
	}
	return (counter);
}

char	*ft_strcat(char *dest, char *src)
{
	int counter;

	counter = 0;
	while (*dest != '\0')
	{
		dest++;
		counter++;
	}
	if (counter > 0)
	{
		*dest = '\n';
		dest++;
	}
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

char	*ft_concat_params(int argc, char **argv)
{
	int		counter;
	int		total_length;
	char	*final;
	int		number_params;

	total_length = 0;
	counter = 1;
	number_params = 1;
	while (counter != argc)
	{
		total_length += ft_strlen(argv[counter]);
		counter++;
	}
	final = (char*)malloc(sizeof(char) * (total_length + 1));
	while (number_params != argc)
	{
		ft_strcat(final, argv[number_params]);
		number_params++;
	}
	return (final);
}
