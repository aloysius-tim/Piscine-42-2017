/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 17:52:20 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/09 18:12:41 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

int						ft_strlen(char *str)
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

char					*ft_strcp(char *dest, char *src)
{
	char *head;

	head = src;
	while ((*dest++ = *src++))
		;
	return (head);
}

struct	s_stock_par		*ft_param_to_tab(int ac, char **av)
{
	t_stock_par		*stock;
	int				i;

	stock = malloc(sizeof(t_stock_par) * ac + 1);
	i = 0;
	if (!stock)
		return (0);
	while (i < ac)
	{
		stock[i].size_param = ft_strlen(av[i]);
		stock[i].str = av[i];
		stock[i].copy = (char*)malloc(sizeof(char) * stock[i].size_param + 1);
		stock[i].copy = ft_strcp(stock[i].copy, av[i]);
		stock[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	stock[i].str = 0;
	return (stock);
}
