/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 13:03:29 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/06 01:16:19 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_div(int nb, int div)
{
	if (div == 1)
		return (1);
	if (nb % div == 0)
		return (0);
	return (ft_is_div(nb, div - 1));
}

int		ft_is_prime(int nb)
{
	if (nb <= 1)
		return (0);
	return (ft_is_div(nb, nb - 1));
}
