/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 15:06:10 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/15 00:47:12 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *new_elem;
	t_list *tmp;

	tmp = *begin_list;
	new_elem = ft_create_elem(data);
	*begin_list = new_elem;
	(*begin_list)->next = tmp;
}
