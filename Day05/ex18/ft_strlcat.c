/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/06 04:26:02 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/08 10:15:53 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int					ft_strlen(char *str)
{
	int counter;

	counter = 0;
	while (*str != '\0')
	{
		counter++;
		str++;
	}
	return (counter);
}

char				*ft_strncat(char *dest, char *src, int nb)
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

unsigned	int		ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned	int		dest_len;
	unsigned	int		src_len;

	if (size < (unsigned)ft_strlen(dest))
		dest_len = size;
	else
		dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (dest_len == size)
		return (size + src_len);
	if (src_len < size - dest_len)
		ft_strncat(dest, src, src_len + 1);
	else
	{
		ft_strncat(dest, src, size - dest_len - 1);
		dest[size - 1] = '\0';
	}
	return (dest_len + src_len);
}
