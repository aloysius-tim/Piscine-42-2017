/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/06 15:04:58 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/06 17:45:06 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned	int		ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int		counter;

	counter = 0;
	while (*src != '\0' && counter != (int)(size) - 1)
	{
		*dest = *src;
		src++;
		dest++;
		counter++;
	}
	while (*src != '\0')
	{
		src++;
		counter++;
	}
	*dest = '\0';
	return (counter);
}
