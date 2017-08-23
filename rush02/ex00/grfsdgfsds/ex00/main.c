/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/20 01:29:01 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/23 10:03:00 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush02.h"

int		ft_get_x(char *input)
{
	int counter;

	counter = 0;
	while (*input)
	{
		counter++;
		if (*input == '\n')
			break ;
		input++;
	}
	return (counter - 1);
}

int		ft_get_y(char *input)
{
	int counter;

	counter = 0;
	while (*input)
	{
		if (*input == '\n')
			counter++;
		input++;
	}
	return (counter);
}

void	print_name(char *name, int x, int y, int print_sep)
{
	char *a_str;
	char *b_str;

	a_str = ft_itoa(x);
	b_str = ft_itoa(y);
	if (print_sep)
		write(1, " || ", 4);
	write(1, "[", 1);
	write(1, name, ft_strlen(name));
	write(1, "] [", 3);
	write(1, a_str, ft_strlen(a_str));
	write(1, "] [", 3);
	write(1, b_str, ft_strlen(b_str));
	write(1, "]", 2);
}

void	print_names(char *input)
{
	int a;
	int b;
	int c;
	int d;
	int e;

	if ((a = (ft_strcmp(input, rush00(ft_get_x(input), ft_get_y(input))))) == 0)
		print_name("colle-00", ft_get_x(input), ft_get_y(input), 0);
	if ((b = (ft_strcmp(input, rush01(ft_get_x(input), ft_get_y(input))))) == 0)
		print_name("colle-01", ft_get_x(input), ft_get_y(input), (a == 0));
	if ((c = (ft_strcmp(input, rush02(ft_get_x(input), ft_get_y(input))))) == 0)
		print_name("colle-02", ft_get_x(input), ft_get_y(input), (
b == 0 || a == 0));
	if ((d = (ft_strcmp(input, rush03(ft_get_x(input), ft_get_y(input))))) == 0)
		print_name("colle-03", ft_get_x(input), ft_get_y(input), (
c == 0 || b == 0 || a == 0));
	if ((e = (ft_strcmp(input, rush04(ft_get_x(input), ft_get_y(input))))) == 0)
		print_name("colle-04", ft_get_x(input), ft_get_y(input), (
d == 0 || c == 0 || b == 0 || a == 0));
	if (a != 0 && b != 0 && c != 0 && d != 0 && e != 0)
		write(1, "aucune", 6);
	write(1, "\n", 1);
}

int		main(void)
{
	int		ret_read;
	char	buffer[2];
	t_list	*input_list;
	t_list	*tmp;
	char	*input;

	buffer[1] = '\0';
	while ((ret_read = read(0, buffer, BUFFER)))
		ft_list_push_back(&input_list, ft_strdup(buffer));
	input = (char *)malloc(sizeof(char) * (ft_list_size(input_list) + 1));
	while (input_list)
	{
		ft_strcat(input, input_list->data);
		tmp = input_list;
		input_list = input_list->next;
		free(tmp->data);
		free(tmp);
	}
	rush00(1, 1);
	print_names(input);
	free(input);
	ft_list_clear(&input_list);
	return (0);
}
