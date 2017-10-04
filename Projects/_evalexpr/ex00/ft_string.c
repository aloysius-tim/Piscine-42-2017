/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 02:10:16 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/19 15:41:29 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

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

char	*ft_strdup(char *src)
{
	char *dest;

	dest = malloc(sizeof(*src));
	ft_strcpy(dest, src);
	return (dest);
}

char	*ft_strndup(char *src, unsigned int size)
{
	char *dest;

	dest = malloc(sizeof(char) * (size + 1));
	ft_strncpy(dest, src, size);
	return (dest);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*first;

	first = dest;
	while ((n > 0) && (*src != '\0'))
	{
		*dest++ = *src++;
		n--;
	}
	while (n > 0)
	{
		*dest++ = '\0';
		--n;
	}
	dest = first;
	return (dest);
}

int		ft_strlen(char *str)
{
	int counter;

	counter = 0;
	while (*str)
	{
		str++;
		counter++;
	}
	return (counter);
}
