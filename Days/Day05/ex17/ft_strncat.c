/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/06 04:10:31 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/06 04:23:12 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int nb)
{
	int counter;

	counter = 0;
	while (*dest != '\0')
	{
		dest++;
		counter++;
	}
	while (*src != '\0' && nb != 0)
	{
		*dest = *src;
		dest++;
		src++;
		counter++;
		nb--;
	}
	*dest = '\0';
	return (dest - counter);
}
