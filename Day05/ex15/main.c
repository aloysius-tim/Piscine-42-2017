/* ************************************************************************** */ /*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/06 03:48:09 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/06 05:00:50 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_printable(char *str);

int		main(void)
{
	printf("%d", ft_str_is_printable("fedhbBJHJfds\n"));
	printf("%d", ft_str_is_printable("khjbKJOHBJbkj"));
	return (0);
}
