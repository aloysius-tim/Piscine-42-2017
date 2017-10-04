/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/06 02:18:57 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/06 02:28:15 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int		main(void)
{
	printf("%s\n", ft_strstr("Bonjour Tim, ok ?", "Tim"));
	printf("%s\n", strstr("Bonjour Tim, ok ?", "Tim"));
	printf("%s\n", ft_strstr("Bonjour Tam, ok ?", "Tim"));
	printf("%s\n", strstr("Bonjour Tam, ok ?", "Tim"));
	printf("%s\n", ft_strstr("", "Tim"));
	printf("%s\n", strstr("", "Tim"));
	printf("%s\n", ft_strstr("Bonjour", ""));
	printf("%s\n", strstr("Bonjour", ""));
	return 0;
}
