/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 17:40:31 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/15 21:08:21 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display_file.h"

int		main(int argc, char *argv[])
{
	if (argc > 2)
		write(2, "Too many arguments.\n", 20);
	else if (argc != 2)
		write(2, "File name missing.\n", 19);
	else
		ft_display_file(argv[1]);
	return (0);
}
