/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/06 15:31:53 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/06 22:21:30 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strlen(char *str)
{
	int counter;

	counter = 0;
	while (*str != '\0')
	{
		str++;
		counter++;
	}
	return (counter);
}

int		ft_strcmp(char *s1, char *s2)
{
	if (*s1 != *s2)
		return (*s1 - *s2);
	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (0);
}

int		ft_unique_str(char *str)
{
	int counter;

	counter = 1;
	while (*str != '\0')
	{
		while (*(str + counter) != '\0')
		{
			if (*str == *(str + counter))
				return (0);
			counter++;
		}
		str++;
		counter = 1;
	}
	return (1);
}

int		ft_is_alpha_num(char *str)
{
	while (*str != '\0')
	{
		if (!((*str >= 32 || *str <= 126) && *str != '-' && *str != '+'))
			return (0);
		str++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		base_n;
	long	nbr_long;

	nbr_long = nbr;
	base_n = ft_strlen(base);
	if (ft_strlen(base) <= 1 || ft_is_alpha_num(base) == 0 ||
			ft_unique_str(base) == 0)
		return ;
	if (nbr_long < 0)
	{
		ft_putchar('-');
		nbr_long *= -1;
	}
	if (nbr_long >= ft_strlen(base))
	{
		ft_putnbr_base(nbr_long / ft_strlen(base), base);
		ft_putnbr_base(nbr_long % ft_strlen(base), base);
	}
	else
		ft_putchar(base[nbr_long]);
}
