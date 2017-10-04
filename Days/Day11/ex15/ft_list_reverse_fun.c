/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 17:23:07 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/16 05:03:36 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_list_at(t_list *begin_list, unsigned int nbr)
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

void		ft_swap(unsigned int i, unsigned int j, t_list *begin_list)
{
	t_list	*tmp;
	t_list	*tmp2;
	void	*stock;

	stock = 0;
	tmp = ft_list_at(begin_list, i);
	tmp2 = ft_list_at(begin_list, j);
	stock = tmp->data;
	tmp->data = tmp2->data;
	tmp2->data = stock;
}

int			ft_list_size(t_list *begin_list)
{
	int counter;

	counter = 0;
	while (begin_list)
	{
		counter++;
		begin_list = begin_list->next;
	}
	return (counter);
}

void		ft_list_reverse_fun(t_list *begin_list)
{
	int	size;
	int	i;
	int	j;

	if (!begin_list)
		return ;
	size = ft_list_size(begin_list);
	i = 1;
	j = size;
	while (i < j)
	{
		ft_swap(i++, j--, begin_list);
	}
}
