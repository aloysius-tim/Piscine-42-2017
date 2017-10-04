/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_insert.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 21:58:47 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/17 07:33:44 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_fron(t_list **begin_list, void *data)
{
	t_list *new_elem;
	t_list *tmp;

	new_elem = ft_create_elem(data);
	if (!begin_list || !(*begin_list))
	{
		*begin_list = new_elem;
		return ;
	}
	tmp = *begin_list;
	*begin_list = new_elem;
	(*begin_list)->next = tmp;
}

void	ft_ptr_swap(void **a, void **b)
{
	char *tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_list_sor(t_list **begin_list, int (*cmp)())
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

void	ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
	ft_list_push_fron(begin_list, data);
	ft_list_sor(begin_list, cmp);
}
