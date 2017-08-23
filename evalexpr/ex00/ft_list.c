/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/19 12:10:55 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/20 17:35:16 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list	*elem;

	elem = (t_list*)malloc(sizeof(t_list));
	elem->next = NULL;
	elem->data = data;
	return (elem);
}

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *current;
	t_list *new;

	new = ft_create_elem(data);
	current = *begin_list;
	if (begin_list == NULL || (*begin_list) == NULL)
	{
		*begin_list = new;
		return ;
	}
	while (current->next)
	{
		current = current->next;
	}
	current->next = new;
}

void	ft_list_push_front(t_list **begin_list, void *data)
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

int		ft_list_size(t_list *begin_list)
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

void	*ft_list_pop_front(t_list **list)
{
	t_list		*tmp;
	void		*result;

	if (*list == NULL)
		return (NULL);
	result = (*list)->data;
	tmp = *list;
	*list = (*list)->next;
	free(tmp);
	return (result);
}
