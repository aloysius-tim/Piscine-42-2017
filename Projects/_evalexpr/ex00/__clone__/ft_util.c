/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_util.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/19 12:24:21 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/20 17:38:57 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_util.h"
#include <stdio.h>

int		ft_count_size_number(char *str)
{
	int counter;

	counter = 0;
	if (*str == '-' || *str == '+')
	{
		counter++;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		str++;
		counter++;
	}
	return (counter);
}

int		ft_is_prioritary(char new_char, char *top)
{
	if (top == NULL)
		return (-2);
	if ((new_char == '/' || new_char == '*' || new_char == '%') && ((*top == '/'
) || *top == '*' || *top == '%'))
		return (0);
	if ((new_char == '+' || new_char == '-') && (*top == '+' || *top == '-'))
		return (0);
	if ((new_char == '/' || new_char == '*' || new_char == '%') && ((*top == '+'
) || *top == '-'))
		return (1);
	if ((new_char == '+' || new_char == '-') && (*top == '/' || (*top == '*'
) || *top == '%'))
		return (-1);
	return (0);
}
