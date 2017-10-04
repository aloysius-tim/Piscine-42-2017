/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoblech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 01:45:41 by hsoblech          #+#    #+#             */
/*   Updated: 2017/08/23 20:27:38 by hsoblech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

t_map	*ft_read_from_stdin(void)
{
	int		nb_read;
	char	buf[BUF_SIZE + 1];
	char	*result;
	char	*tmp;
	int		i;

	i = 1;
	tmp = 0;
	result = 0;
	while ((nb_read = read(0, buf, BUF_SIZE)) > 0)
	{
		buf[nb_read] = '\0';
		result = (char*)malloc(sizeof(char) * ((BUF_SIZE + 1) * i));
		if (!result)
			return (0);
		ft_strcat(result, tmp);
		ft_strcat(result, buf);
		tmp = result;
		i++;
	}
	return (ft_parse_map(result));
}

t_map	*ft_read_from_file(char *file_name, int i)
{
	int		file;
	int		nb_read;
	char	buf[BUF_SIZE + 1];
	char	*result;
	char	*tmp;

	tmp = 0;
	result = 0;
	file = open(file_name, O_RDONLY);
	if (file == -1)
		return (0);
	while ((nb_read = read(file, buf, BUF_SIZE)) > 0)
	{
		buf[nb_read] = '\0';
		tmp = result;
		result = (char*)malloc(sizeof(char) * ((BUF_SIZE + 1) * i));
		if (!result)
			return (0);
		ft_strcat(result, tmp);
		ft_strcat(result, buf);
		i++;
	}
	close(file);
	return (ft_parse_map(result));
}
