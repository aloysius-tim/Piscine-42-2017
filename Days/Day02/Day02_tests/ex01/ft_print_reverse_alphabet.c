/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/02 10:19:56 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/02 17:18:09 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1,		 &c, 1);
	return (0);
}

 void	ft_print_reverse_alphabet(void)
{
	char letter;
	letter = 'z';
	ft_putchar(letter);

	while(letter != 'a')
	{
		letter--;
		ft_putchar(letter);
	}
}

int		main()
{
	ft_print_reverse_alphabet();
	return (0);
}

