/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <tkeynes@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/02 09:52:23 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/02 09:59:27 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1,		 &c, 1);
	return (0);
}

 void ft_print_alphabet(void)
{
	char letter;
	letter = 'a';
	ft_putchar(letter);

	while(letter != 'z')
	{
		letter++;
		ft_putchar(letter);
	}
}

int			main()
{
	ft_print_alphabet();
	return (0);
}


