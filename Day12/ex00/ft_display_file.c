/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 17:42:54 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/15 21:05:55 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display_file.h"

void	ft_display_file(char *name)
{
	char	buffer[BUFFER + 1];
	int		fd;
	int		ret_read;

	fd = open(name, O_RDONLY, S_IREAD);
	if (fd == -1)
		return ;
	while ((ret_read = read(fd, buffer, BUFFER)))
	{
		buffer[ret_read] = '\0';
		write(1, buffer, ret_read);
	}
	close(fd);
}
