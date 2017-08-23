/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 19:09:02 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/16 04:52:26 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *prev;
	t_list *curr;

	curr = *begin_list;
	while (curr && !cmp(curr->data, data_ref))
	{
		*begin_list = curr->next;
		free(curr);
		curr = *begin_list;
	}
	while (curr)
	{
		if (!cmp(curr->data, data_ref))
		{
			prev->next = curr->next;
			free(curr);
			curr = prev->next;
		}
		else
		{
			prev = curr;
			curr = curr->next;
		}
	}
}
