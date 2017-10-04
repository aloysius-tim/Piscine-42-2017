/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 00:27:42 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/11 00:28:21 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned	int	ft_collatz_conjecture(unsigned int base)
{
	if (!base)
		return (0);
	if (base == 1)
		return (0);
	if (base % 2 == 0)
		return (1 + ft_collatz_conjecture(base / 2));
	else
		return (1 + ft_collatz_conjecture((3 * base) + 1));
}
