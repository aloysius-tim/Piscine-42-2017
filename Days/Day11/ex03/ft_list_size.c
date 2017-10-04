/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 15:20:54 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/15 01:14:04 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int counter;

	counter = 0;
	if (begin_list == NULL)
		return (0);
	while (begin_list)
	{
		counter++;
		begin_list = begin_list->next;
	}
	return (counter);
}
