/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoblech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 01:44:10 by hsoblech          #+#    #+#             */
/*   Updated: 2017/08/23 19:58:52 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (!dest || !src)
		return (0);
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int		ft_atoi(char *str)
{
	int		neg;
	long	nb_long;
	int		tmp;

	neg = 1;
	nb_long = 0;
	while (*str <= 32)
		str++;
	if ((*str == '+') || (*str == '-'))
	{
		if (*str == '-')
			neg = -1;
		str++;
	}
	while ((*str >= '0') && (*str <= '9'))
	{
		nb_long *= 10;
		tmp = *str - 48;
		nb_long += tmp;
		if (nb_long > 2147483647 || nb_long < -2147483647)
			return (0);
		str++;
	}
	return (nb_long * neg);
}

int		ft_strlen_to_newline(char *str)
{
	int i;

	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	if (!str[i])
		return (-1);
	return (i);
}

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}
