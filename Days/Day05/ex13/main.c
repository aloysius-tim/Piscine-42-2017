/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/06 03:48:09 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/06 03:58:02 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_lowercase(char *str);

int		main(void)
{
	printf("%d", ft_str_is_lowercase("fedhbBJHJfds"));
	printf("%d", ft_str_is_lowercase("4245"));
	return (0);
}
