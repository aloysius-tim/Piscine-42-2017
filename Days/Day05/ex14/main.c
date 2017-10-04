/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/06 03:48:09 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/06 03:59:38 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_uppercase(char *str);

int		main(void)
{
	printf("%d", ft_str_is_uppercase("fedhbBJHJfds"));
	printf("%d", ft_str_is_uppercase("JHKLKHGJ"));
	return (0);
}
