/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/06 03:48:09 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/06 03:55:28 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_numeric(char *str);

int		main(void)
{
	printf("%d", ft_str_is_numeric("fedhbBJHJfds"));
	printf("%d", ft_str_is_numeric("fd5424"));
	return (0);
}
