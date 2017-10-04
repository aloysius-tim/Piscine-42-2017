/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 01:07:41 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/11 01:41:58 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char *s1, char *s2)
{
	if (*s1 != *s2)
		return (*s1 - *s2);
	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (0);
}

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

char	*ft_strlowcase(char *str)
{
	int counter;

	counter = 0;
	while (*str != '\0')
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			(*str) = (*str) + ('a' - 'A');
		}
		str++;
		counter++;
	}
	return (str - counter);
}

char	*ft_remove_spaces(char *str)
{
	char *head;

	while (*str == ' ')
		str++;
	head = str;
	str += ft_strlen(str) - 1;
	while (*str == ' ')
	{
		if (*str == ' ')
		{
			*str = '\0';
		}
		str--;
	}
	return (head);
}

int		main(int argc, char *argv[])
{
	int counter;

	counter = 1;
	while (counter != argc)
	{
		ft_strlowcase(argv[counter]);
		if (!ft_strcmp((ft_remove_spaces(argv[counter])), "president"))
		{
			write(1, "Alert!!!\n", 9);
			return (0);
		}
		if (!ft_strcmp((ft_remove_spaces(argv[counter])), "attack"))
		{
			write(1, "Alert!!!\n", 9);
			return (0);
		}
		if (!ft_strcmp((ft_remove_spaces(argv[counter])), "powers"))
		{
			write(1, "Alert!!!\n", 9);
			return (0);
		}
		counter++;
	}
	return (0);
}
