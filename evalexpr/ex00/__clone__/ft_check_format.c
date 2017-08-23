/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/19 11:42:43 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/20 17:34:38 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_check_format.h"

int		ft_is_operande(char *str, char *head)
{
	if (str == head && *str != '(')
		return (1);
	if (*str == '(')
		return (0);
	if (*str == '-' || *str == '+')
	{
		if ((*(str - 1) == '-' || *(str - 1) == '+' || (*(str - 1) == '/'
) || *(str - 1) == '*' || *(str - 1) == '%') && *(str - 1) != ')' && *(str + 1
) >= '0' && *(str + 1) <= '9')
			return (1);
	}
	if (((*str >= '0' && *str <= '9')))
		return (1);
	return (0);
}

int		ft_is_operator(char *str)
{
	if ((*str == '-' || *str == '+' || *str == '/' || *str == '%' || *str == '*'
) && (ft_is_operande(str + 1, 0) || *(str + 1) == '('))
		return (1);
	return (0);
}

int		ft_is_open_parenthesis(char *str)
{
	if (*str == '(')
		return (1);
	return (0);
}

int		ft_is_close_parenthesis(char *str)
{
	if (*str == '(')
		return (1);
	return (0);
}

int		ft_is_numeric(char *str)
{
	if ((*str == '-' || *str == '+') && *(str + 1) == '\0')
		return (0);
	if ((*str == '-' || *str == '+'))
		str++;
	if (*str < '0' || *str > '9')
		return (0);
	while (*str)
	{
		if (*str < '0' && *str > '9')
			return (0);
		str++;
	}
	return (1);
}
