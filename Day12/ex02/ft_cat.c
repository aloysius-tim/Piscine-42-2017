/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 17:42:54 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/16 23:13:25 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cat.h"

void	ft_display_input(void)
{
	char	buffer[BUFFER + 1];
	int		ret_read;

	while ((ret_read = read(0, buffer, BUFFER)))
	{
		buffer[ret_read] = '\0';
		write(1, buffer, ret_read);
	}
	close(0);
}
