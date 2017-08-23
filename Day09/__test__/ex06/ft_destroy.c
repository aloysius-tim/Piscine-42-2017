/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 22:43:44 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/11 00:26:03 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ultimator.h"
#include <stdlib.h>

void	ft_destroy(char ***factory)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (factory[i] != NULL)
	{
		while (factory[i][j] != NULL)
		{
			free(factory[i][j]);
			if (factory[i][j + 1] == NULL)
				free(factory[i][j + 1]);
			j++;
		}
		free(factory[i]);
		if (factory[i + 1] == NULL)
			free(factory[i + 1]);
		i++;
		j = 0;
	}
	free(factory);
}
