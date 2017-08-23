/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 15:36:09 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/16 04:50:15 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

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

t_list	*ft_list_push_params(int ac, char **av)
{
	int		current;
	t_list	*begin_list;

	current = 0;
	begin_list = 0;
	while (current < ac)
	{
		ft_list_push_front(&begin_list, av[current]);
		current++;
	}
	return (begin_list);
}
