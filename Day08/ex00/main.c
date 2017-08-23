/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 23:55:43 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/08 14:08:55 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	**ft_split_whitespaces(char *str);
int		ft_count_words(char *str);
int		ft_count_word_size(char *str);

int		main(void)
{
	char **test;
	int counter = -1;
	//printf("%d", ft_count_word_size("Bonjour	comment\nca va     ?"));
	test = ft_split_whitespaces("\n	  Bonjour		comment\nca va	fdd		  fdfdsfdfdf fd sdfdcfdcx			");
	while (counter++ < 8)
		printf("%s\n", test[counter]);
	return 0;
}
