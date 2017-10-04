/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/20 01:22:21 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/20 23:24:25 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

int		ft_putchar(char c, char *final)
{
	char character[2];

	character[0] = c;
	character[1] = '\0';
	if (ft_strlen(final) == 0)
		ft_strcpy(final, character);
	else
		ft_strcat(final, character);
	return (0);
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

void	ft_print_x_char(char c, int n, char *final)
{
	while (n != 0)
	{
		ft_putchar(c, final);
		n--;
	}
}

char	*ft_strdup(char *src)
{
	char *dest;

	dest = malloc(sizeof(*src));
	ft_strcpy(dest, src);
	return (dest);
}

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
