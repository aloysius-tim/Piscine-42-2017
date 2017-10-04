/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/16 00:42:25 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/16 02:38:47 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_nbr_str_base.h"

char		*ft_strcpy(char *dest, char *src)
{
	int counter;

	counter = 0;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		counter++;
	}
	*dest = '\0';
	return (dest - counter);
}

int			count(unsigned long nbr, int base)
{
	int ret;

	ret = 0;
	while (nbr != 0)
	{
		nbr /= base;
		ret++;
	}
	return (ret);
}

char		*ft_nbr_str_base(unsigned int nbr, int base)
{
	char	*retour;
	int		nb;
	int		i;
	char	tab[17];

	if (nbr == 0)
		return ("0");
	ft_strcpy(tab, "0123456789abcdef");
	nb = count(nbr, base);
	retour = malloc(nb + 1);
	i = 1;
	while (nbr != 0)
	{
		retour[nb - i] = tab[nbr % base];
		nbr /= base;
		i++;
	}
	retour[nb] = '\0';
	return (retour);
}

void		print_hexa(int nb, int nb_char)
{
	char	*hexa;
	int		size;
	int		counter;

	counter = 0;
	hexa = ft_nbr_str_base(nb, 16);
	size = ft_strlen(hexa);
	while (counter++ < nb_char - size)
		write(1, "0", 1);
	write(1, hexa, size);
}
