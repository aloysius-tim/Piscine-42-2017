/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 15:29:26 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/15 01:53:52 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	int		counter;
	t_list	*head;

	counter = 1;
	if (begin_list == NULL)
		return (NULL);
	head = begin_list;
	while (head->next != NULL)
	{
		counter++;
		head = head->next;
	}
	return (head);
}
