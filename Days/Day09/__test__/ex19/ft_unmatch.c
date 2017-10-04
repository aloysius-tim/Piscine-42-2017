/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unmatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 06:38:01 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/11 06:39:29 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_unmatch(int *tab, int length)
{
	int i;
	int j;
	int counter;
	int value;

	i = 0;
	j = 0;
	counter = 0;
	while (i < length)
	{
		value = tab[i];
		j = 0;
		while (j < length)
		{
			if (tab[j] == value)
				counter++;
			j++;
		}
		if (counter % 2)
			return (value);
		i++;
	}
	return (0);
}
