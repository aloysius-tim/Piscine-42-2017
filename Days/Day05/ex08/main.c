/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/06 02:47:33 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/06 14:52:01 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strupcase(char *str);

int main(void)
{
	char test[] = "binjour54";
	//printf("%c", 'a' - ('a' - 'A'));
	printf("%s", ft_strupcase(test));
	return (0);
}
