/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 23:50:19 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/08 14:50:04 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_count_words(char *str)
{
	int counter;

	counter = 0;
	if (!(*(str) == ' ' || *(str) == '\t' || *(str) == '\n'))
		counter++;
	while (*str != '\0')
	{
		while (*str == ' ' || *str == '\t' || *str == '\n')
			str++;
		if ((*(str - 1) == ' ' || *(str - 1) == '\t' || *(str - 1) == '\n') &&
*(str) != '\0')
			counter++;
		str++;
	}
	return (counter);
}

int		ft_count_word_size(char *str)
{
	int final;

	final = 0;
	while (*str == ' ' || *str == '\t' || *str == '\n')
		str++;
	while (*str != ' ' && *str != '\t' && *str != '\n' && *str != '\0')
	{
		final++;
		str++;
	}
	return (final);
}

char	*ft_strcpy(char *dest, char *src)
{
	int counter;

	counter = 0;
	while (*src == ' ' || *src == '\t' || *src == '\n')
		src++;
	while (*src != '\0' && *src != ' ' && *src != '\t' && *src != '\n')
	{
		*dest = *src;
		dest++;
		src++;
		counter++;
	}
	*dest = '\0';
	return (dest - counter);
}

void	ft_allocate_tab(char *str, char *head, char **final)
{
	int counter;

	counter = 0;
	while (*str != '\0')
	{
		while (*str == ' ' || *str == '\t' || *str == '\n')
			str++;
		if (*(str - 1) == ' ' || *(str - 1) == '\t' || *(str - 1) == '\n' ||
str == head)
		{
			final[counter] = malloc(sizeof(char) * (ft_count_word_size(str)));
			counter++;
		}
		final[counter] = malloc(sizeof(char));
		str++;
	}
}

char	**ft_split_whitespaces(char *str)
{
	char	**final;
	int		nb_words;
	char	*head;
	int		counter;

	counter = 0;
	head = str;
	nb_words = ft_count_words(str);
	final = (char**)malloc(sizeof(char*) * (nb_words + 1));
	ft_allocate_tab(str, head, final);
	while (*str == ' ' || *str == '\t' || *str == '\n')
		str++;
	while (counter < nb_words)
	{
		ft_strcpy(final[counter], str);
		while (*str == ' ' || *str == '\t' || *str == '\n')
			str++;
		str += ft_count_word_size(str) + 1;
		counter++;
	}
	final[counter] = 0;
	return (final);
}
