/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 13:35:48 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/08 14:09:48 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_words_tables(char **tab);
char	**ft_split_whitespaces(char *str);

int main()
{
	char **test = ft_split_whitespaces("  Bonjour,		comment\nca va			? !		  ");
	ft_print_words_tables(test);
	return 0;
}
