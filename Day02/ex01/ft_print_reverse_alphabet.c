/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/02 20:31:30 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/02 20:31:35 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c);

void	ft_print_reverse_alphabet(void)
{
	char letter;

	letter = 'z';
	ft_putchar(letter);
	while (letter != 'a')
	{
		letter--;
		ft_putchar(letter);
	}
}
