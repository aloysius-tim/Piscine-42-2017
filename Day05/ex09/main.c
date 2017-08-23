/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/06 02:47:33 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/06 14:57:47 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strlowcase(char *str);

int main(void)
{
	char test[] = "BONJOUR54 ok";
	//printf("%c", 'a' - ('a' - 'A'));
	printf("%s", ft_strlowcase(test));
	return (0);
}
