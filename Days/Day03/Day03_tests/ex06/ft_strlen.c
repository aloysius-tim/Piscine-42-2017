/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 12:44:37 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/03 12:48:10 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

int ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int ft_strlen(char *str)
{
	int counter;
	counter = 0;

	while(*str != '\0')
	{
		counter++;
		str++;
	}

	return counter;
}

int main(void)
{
	printf("%d", ft_strlen("Bonjour"));
	return 0;
}
