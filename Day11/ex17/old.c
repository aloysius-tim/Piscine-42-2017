/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_insert.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 21:58:47 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/15 00:43:24 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_ptr_swap(void **a, void **b)
{
	char *tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	int		changed;
	t_list	*head;

	changed = 1;
	if (*begin_list)
		while (changed)
		{
			changed = 0;
			head = *begin_list;
			while (head->next)
			{
				if ((*cmp)(head->data, head->next->data) > 0)
				{
					ft_ptr_swap(&head->data, &head->next->data);
					changed = 1;
				}
				head = head->next;
			}
		}
}

t_list	*ft_list_at(t_list *begin_list, unsigned int  nbr)
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

void	ft_sorted_list_merge(t_list **begin_list1, t_list *begin_list2
, int (*cmp)())
{
	int		size;
	t_list	*last;

	size = ft_list_size(*begin_list1);
	last = ft_list_at(*begin_list1, size);
	last->next = begin_list2;
	ft_list_sort(begin_list1, cmp);
}
