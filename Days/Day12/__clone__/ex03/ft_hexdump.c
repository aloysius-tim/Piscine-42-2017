/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexdump.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 23:43:20 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/17 05:42:43 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hexdump.h"

void	ft_put_str_escape(char *data)
{
	while (*data)
	{
		if (*data == '\n' || *data == '\a' || *data == '\b' || *data == '\f' ||
*data == '\r' || *data == '\t' || *data == '\v')
			write(1, ".", 1);
		else
			write(1, data, 1);
		data++;
	}
}

void	ft_print_c_format(int counter_str, int ret_read, char *buffer)
{
	counter_str--;
	if (counter_str < ret_read)
		print_hexa(buffer[counter_str], 2);
	else
		write(1, "  ", 2);
	if (counter_str == 7)
		write(1, "  ", 2);
	else
		write(1, " ", 1);
}

void	ft_print_c_format_bis(char *buffer)
{
	int counter;

	counter = 0;
	if (ft_strlen(buffer) > 0)
	{
		while (*buffer)
		{
			print_hexa(*buffer, 2);
			if (counter == 7)
				write(1, "  ", 2);
			else
				write(1, " ", 1);
			buffer++;
			counter++;
		}
		while (counter < 16)
		{
			if (counter == 7)
				write(1, "     ", 4);
			else
				write(1, "   ", 3);
			counter++;
		}
	}
}

void	ft_print_spaces(char *buffer)
{
	if (ft_strlen(buffer) > 0)
		write(1, "  ", 2);
	else
		write(1, "\n", 1);
}

void	ft_print_data(char *buffer, char *buffer2)
{
	buffer2[0] = '\0';
	if (ft_strlen(buffer) > 0)
	{
		write(1, " |", 2);
		ft_put_str_escape(buffer);
		write(1, "|\n", 2);
	}
}

void	ft_hexdump(char **argv, char *buffer, char *buffer2, int fd, int argc)
{
	int		ret_read;
	int		ret_read2;
	int		counter;
	int		counter_str;
	int		ac;

	counter = 0;
	ret_read = -1;
	((fd = open(argv[(ac = 2)], O_RDONLY, S_IREAD)) == -1) ? (0) : (ac *= 1);
	while ((ret_read != 0 || ret_read2 != 0) && ac  < argc)
	{
		ret_read2 = 0;
		counter_str = 0;
		print_hexa(counter, 8);
		ret_read = read(fd, buffer, 16);
		buffer[ret_read] = '\0';
		ret_read2 = ret_read;
		while (ret_read2 != 16 && ac + 1 < argc)
		{
			close(fd);
			((fd = open(argv[++ac], 0, S_IREAD)) == -1) ? (0) : (ac *= 1);
			ret_read2 += read(fd, buffer2, 16 - ret_read2);
			buffer2[ret_read2] = '\0';
			ft_strcat(buffer, buffer2);
		}
		ft_print_spaces(buffer);
		ft_print_c_format_bis(buffer);
		ft_print_data(buffer, buffer2);
		counter += ft_strlen(buffer);
	}
	close(fd);
}
