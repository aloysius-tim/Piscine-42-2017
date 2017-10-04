/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compact.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 03:11:05 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/11 16:41:25 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_compact(char **tab, int length)
{
	int i;
	int save;

	i = 0;
	while (i < length)
	{
		if (tab[i] == 0)
		{
			save = i;
			i++;
			while (tab[i] == 0)
				i++;
			if (i < length)
			{
				tab[save] = tab[i];
				tab[i] = 0;
				i = 0;
			}
		}
		i++;
	}
	i = 0;
	while (tab[i])
		i++;
	return (i);
}
