/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/06 04:14:18 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/06 04:23:30 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, int nb);

int main(void)
{
	char test[100] = "Bonjour ";
	printf("%s", ft_strncat(test, "Timothy", 3));
	return (0);
}
