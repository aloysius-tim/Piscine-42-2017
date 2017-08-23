/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 12:36:58 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/03 12:43:52 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include <unistd.h>

int ft_putchar(char c)
{
	write(1,				 &c, 1);
	return (0);
}

void ft_putstr(char *str)
{
	while(*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

int main(void)
{
	ft_putstr("42545");
	return 0;
}
