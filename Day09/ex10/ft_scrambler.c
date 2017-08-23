/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_scrambler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 01:47:14 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/11 01:52:03 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_scrambler(int ***a, int *b, int *******c, int ****d)
{
	int a_bis;
	int b_bis;
	int c_bis;
	int d_bis;

	a_bis = ***a;
	b_bis = *b;
	c_bis = *******c;
	d_bis = ****d;
	*******c = a_bis;
	****d = c_bis;
	*b = d_bis;
	***a = b_bis;
}
