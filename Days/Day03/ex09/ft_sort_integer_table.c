/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 13:58:21 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/03 15:28:28 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int c;
	int d;
	int swap;

	c = 0;
	d = 1;
	while (c < size)
	{
		d = c + 1;
		while (d < size)
		{
			if (*(tab + c) > *(tab + d))
			{
				swap = *(tab + c);
				*(tab + c) = *(tab + d);
				*(tab + d) = swap;
			}
			++d;
		}
		++c;
	}
}
