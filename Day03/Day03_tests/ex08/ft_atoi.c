/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 13:20:41 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/04 15:46:40 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>

int		ft_atoi(char *str)
{
	int final = 0;
	int puissance;

	puissance = 1;
	while (*str == ' ')
		str++;
	if (*str == '-')
	{
		puissance*=-1;
		str++;
	}
	while (*str != '\0')
	{
		if ((*str) < '0' || (*str) > '9')
			return (final * puissance);
		final = final * 10 + (0 + (*str) - 48);
		str++;
	}
	return (final * puissance);
}

int main(void)
{
	printf("\n\n%d", ft_atoi(" 09 21 47gfdsf"));
	printf("\n\n%d", atoi(" 09 21 47gfdsf"));
	return 0;
}
