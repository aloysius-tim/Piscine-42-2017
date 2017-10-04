/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 13:06:37 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/08 13:39:42 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

void	ft_print_words_tables(char **tab)
{
	while (*tab != '\0')
	{
		ft_putstr(*(tab));
		ft_putchar('\n');
		(tab++);
	}
}
