/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 19:49:24 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/15 01:40:18 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	while (begin_list != NULL && nbr - 1)
	{
		begin_list = begin_list->next;
		nbr--;
	}
	if (!nbr - 1)
		return (begin_list);
	return (0);
}

int		ft_list_size(t_list *begin_list)
{
	int		counter;
	t_list	*head;

	counter = 1;
	head = begin_list;
	if (begin_list == NULL)
		return (0);
	while (head->next != NULL)
	{
		counter++;
		head = head->next;
	}
	return (counter);
}

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	int		size;
	t_list	*last;

	if (*begin_list1 == NULL)
	{
		*begin_list1 = begin_list2;
		return ;
	}
	size = ft_list_size(*begin_list1);
	last = ft_list_at(*begin_list1, size);
	last->next = begin_list2;
}
