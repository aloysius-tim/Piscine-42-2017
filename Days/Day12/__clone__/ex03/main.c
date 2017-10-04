/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 17:40:31 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/17 05:41:49 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hexdump.h"

int		ft_str_is_numeric(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if (!((*str >= '0' && *str <= '9')))
			return (0);
		str++;
	}
	return (1);
}

int		main(int argc, char *argv[])
{
	g_buffer = malloc(sizeof(char) * (16 + 1));
	g_buffer2 = malloc(sizeof(char) * (16 + 1));
	if (argc > 2 && argv[1][0] == '-' && argv[1][1] == 'C')
		ft_hexdump(argv, g_buffer, g_buffer2, -1, argc);
	free(g_buffer2);
	free(g_buffer);
	return (0);
}
