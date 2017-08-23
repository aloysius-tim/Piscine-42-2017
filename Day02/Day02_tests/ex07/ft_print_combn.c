/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/02 10:46:16 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/02 16:28:21 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1,		 &c, 1);
	return (0);
}

void	ft_print_combn(int n)
{
	if(n<=0 || n>=10)
	{
		return;
	}
}

int main (void)
{
	ft_print_combn(3);
	return(0);
}

