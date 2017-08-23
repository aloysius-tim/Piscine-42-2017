/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 20:37:40 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/13 04:43:58 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void ft_sort_wordtab(char **tab);
char**ft_split_whitespaces(char *str);
void		ft_print_words_tables(char **tab);

int main(int argc, char *argv[])
{
	char **tab;
	tab = ft_split_whitespaces("abba bfd zza abba bfd");
	ft_sort_wordtab(tab);
	ft_print_words_tables(tab);
}
