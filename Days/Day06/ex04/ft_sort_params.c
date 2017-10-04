/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 01:30:46 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/07 01:50:50 by tkeynes          ###   ########.fr       */
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

char	*ft_strcpy(char *dest, char *src)
{
	int counter;

	counter = 0;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		counter++;
	}
	*dest = '\0';
	return (dest - counter);
}

void	sort(int argc, char *argv[])
{
	char	*tmp;
	int		sorted;
	int		i;

	sorted = 0;
	while (!sorted)
	{
		sorted = 1;
		i = 1;
		while (i < argc - 1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				tmp = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = tmp;
				sorted = 0;
			}
			i++;
		}
	}
}

int		main(int argc, char *argv[])
{
	int		counter;

	sort(argc, argv);
	counter = 1;
	while (counter != argc)
	{
		ft_putstr(argv[counter]);
		ft_putchar('\n');
		counter++;
	}
	return (0);
}
