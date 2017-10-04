/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 17:40:31 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/16 21:10:39 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cat.h"

int		main(int argc, char *argv[])
{
	if ((argc == 2 && ft_strlen(argv[1]) == 1 && argv[1][0] == '-' &&
argv[1][1] == '\0') || argc == 1)
		ft_display_input();
	else
		ft_display_file(argv, argc);
	return (0);
}
