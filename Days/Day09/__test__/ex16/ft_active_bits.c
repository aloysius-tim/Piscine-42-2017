/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_active_bits.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 06:13:01 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/11 06:13:39 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned	int	ft_active_bits(int value)
{
	int masque;
	int counter;

	masque = 1;
	counter = 0;
	while (value)
	{
		if (masque & value)
			counter++;
		value >>= 1;
	}
	return (counter);
}
