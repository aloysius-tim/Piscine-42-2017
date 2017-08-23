/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoblech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 01:29:17 by hsoblech          #+#    #+#             */
/*   Updated: 2017/08/23 21:49:19 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	main(int argc, char **argv)
{
	int i;

	i = 1;
	if (argc <= 1)
	{
		if (!ft_bsq(ft_read_from_stdin()))
			ft_puterror("\n");
		else
			ft_putchar('\n');
	}
	else
	{
		while (i < argc)
		{
			if (!(ft_bsq(ft_read_from_file(argv[i], 1))))
				ft_puterror("\n\n");
			else
				ft_putchar('\n');
			i++;
		}
	}
	return (0);
}
