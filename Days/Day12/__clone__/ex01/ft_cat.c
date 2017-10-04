/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 17:42:54 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/16 23:36:43 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cat.h"
#include "ft_err.h"

void	ft_cat_error(char *name, int err)
{
	write(2, "cat: ", 5);
	write(2, name, ft_strlen(name));
	write(2, ": ", 2);
	write(2, g_error_tab[err - 1], ft_strlen(g_error_tab[err - 1]));
	write(2, "\n", 1);
}

void	ft_display_file(char **name, int argc)
{
	char	buffer[BUFFER + 1];
	int		fd;
	int		ret_read;
	int		counter;

	counter = 1;
	while (counter < argc)
	{
		fd = open(name[counter], O_RDONLY, S_IREAD);
		if (fd == -1)
			ft_cat_error(name[counter], errno);
		while ((ret_read = read(fd, buffer, BUFFER)) && fd != -1)
		{
			buffer[ret_read] = '\0';
			write(1, buffer, ret_read);
		}
		if (ret_read == -1 && fd != -1)
			ft_cat_error(name[counter], errno);
		close(fd);
		counter++;
	}
}

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
