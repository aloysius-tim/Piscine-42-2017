/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/02 09:52:23 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/03 14:14:48 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char letter;

	letter = 'a';
	ft_putchar(letter);
	while (letter != 'z')
	{
		letter++;
		ft_putchar(letter);
	}
}
