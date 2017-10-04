/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_join.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 06:33:54 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/11 06:35:28 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int		len;
	char	*tmp_str;

	len = 0;
	tmp_str = str;
	while (*str)
	{
		len++;
		str++;
	}
	str = tmp_str;
	return (len);
}

char	*ft_strcat(char *dest, char *src)
{
	int dest_len;
	int i;

	dest_len = ft_strlen(dest);
	i = 0;
	while (src[i])
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}

char	*ft_join(char **tab, char *sep)
{
	int		i;
	int		counter;
	int		sum;
	char	*str;

	sum = 0;
	counter = 0;
	i = 0;
	while (tab[i] != 0)
	{
		sum += ft_strlen(tab[i]);
		counter++;
		i++;
	}
	sum += (ft_strlen(sep) * counter) - 1;
	str = (char *)malloc(sizeof(char) * sum + 1);
	i = 0;
	while (tab[i] != 0)
	{
		str = ft_strcat(str, tab[i]);
		if (tab[i + 1] != 0)
			str = ft_strcat(str, sep);
		i++;
	}
	return (str);
}
