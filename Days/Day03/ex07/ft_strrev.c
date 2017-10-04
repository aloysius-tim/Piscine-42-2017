/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 12:48:28 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/03 15:23:42 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		counter_str;
	char	*final;
	char	final_tab[100];
	int		counter_final;

	counter_final = 0;
	final = final_tab;
	counter_str = 0;
	while (*str != '\0')
	{
		str++;
		counter_str++;
	}
	while (counter_str != 0)
	{
		str--;
		final_tab[counter_final] = *str;
		counter_final++;
		counter_str--;
	}
	final_tab[counter_final] = '\0';
	str = final;
	return (str);
}
