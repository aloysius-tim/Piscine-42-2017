/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 17:42:54 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/16 23:28:14 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"
#include "ft_err.h"

void	ft_tail_error(char *name, int err)
{
	write(2, "tail: ", 6);
	write(2, name, ft_strlen(name));
	write(2, ": ", 2);
	write(2, g_error_tab[err - 1], ft_strlen(g_error_tab[err - 1]));
	write(2, "\n", 1);
}

int		ft_size_file(char *name)
{
	char	c;
	int		fd;
	int		counter;

	counter = 0;
	fd = open(name, O_RDONLY, S_IREAD);
	if (fd == -1)
		return (0);
	while (read(fd, &c, 1))
		counter++;
	close(fd);
	return (counter);
}

void	ft_lseek(int fd, char *name, int nb_bytes, char sign)
{
	int		counter;
	int		size;
	char	c;

	size = ft_size_file(name);
	counter = 0;
	if (sign == '+')
	{
		while (read(fd, &c, 1) && counter < nb_bytes - 2)
			counter++;
	}
	else
		while (read(fd, &c, 1) && counter < size - nb_bytes - 1)
			counter++;
}

void	ft_display(int fd, char *name)
{
	char	buffer[BUFFER + 1];
	int		ret_read;

	while ((ret_read = read(fd, buffer, BUFFER)))
	{
		buffer[ret_read] = '\0';
		write(1, buffer, ret_read);
	}
	if (ret_read == -1 && fd != -1)
		ft_tail_error(name, errno);
	close(fd);
}

void	ft_display_file(char **name, int nb_bytes, int argc, char sign)
{
	int		fd;
	int		counter;

	counter = 3;
	while (counter < argc)
	{
		fd = open(name[counter], O_RDONLY, S_IREAD);
		if (fd == -1)
			ft_tail_error(name[counter], errno);
		else
		{
			if (counter < argc - 1 && counter != 3 && !errno)
				write(1, "\n", 1);
			if (argc > 4)
			{
				write(1, "==> ", 5);
				write(1, name[counter], ft_strlen(name[counter]));
				write(1, " <==\n", 7);
			}
			ft_lseek(fd, name[counter], nb_bytes, sign);
			ft_display(fd, name[counter]);
			errno = 0;
		}
		counter++;
	}
}
