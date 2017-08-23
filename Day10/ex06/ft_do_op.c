/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 22:21:20 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/12 20:33:07 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_operations.h"
#include "ft_do_op.h"

void	*ft_get_function(char *op)
{
	void	*fcts[5];

	fcts[0] = minus;
	fcts[1] = plus;
	fcts[2] = multi;
	fcts[3] = mod;
	fcts[4] = div;
	if (*op == '-')
		return (fcts[0]);
	if (*op == '+')
		return (fcts[1]);
	if (*op == '*')
		return (fcts[2]);
	if (*op == '%')
		return (fcts[3]);
	if (*op == '/')
		return (fcts[4]);
	return (0);
}

int		main(int argc, char *argv[])
{
	int		nb1;
	int		nb2;
	void	(*f)(int, int);

	if (argc != 4)
		return (0);
	nb1 = ft_atoi(argv[1]);
	nb2 = ft_atoi(argv[3]);
	if (nb1 == 0 && nb2 == 0)
		return (0);
	f = ft_get_function(argv[2]);
	if (*f == 0)
	{
		ft_putnbr(0);
		return (0);
	}
	f(nb1, nb2);
	ft_putchar('\0');
	return (0);
}
