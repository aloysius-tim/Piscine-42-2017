/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/06 02:09:18 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/06 17:42:51 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_start_same(char *str, char *to_find)
{
	while (*to_find != '\0')
	{
		if (*to_find != *str)
			return (0);
		to_find++;
		str++;
	}
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		if (ft_start_same(str, to_find) == 1)
			return (str);
		str++;
	}
	return (0);
}
