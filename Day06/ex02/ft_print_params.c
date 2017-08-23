/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/06 22:55:51 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/06 23:05:09 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

int		main(int argc, char *argv[])
{
	int counter;

	counter = 1;
	while (counter != argc)
	{
		ft_putstr(argv[counter]);
		ft_putchar('\n');
		counter++;
	}
	return (0);
}
