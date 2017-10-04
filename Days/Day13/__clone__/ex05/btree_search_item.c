/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 10:54:34 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/18 09:43:04 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *data_ref
, int (*cmpf)(void *, void *))
{
	t_btree *current;

	if (!root)
		return (NULL);
	current = root;
	while (current)
	{
		if (cmpf(current->item, data_ref) == 0)
			return (current->item);
		else if (cmpf(current->item, data_ref) > 0)
		{
			if (!current->left)
				return (NULL);
			else
				current = current->left;
		}
		else
		{
			if (!current->right)
				return (NULL);
			else
				current = current->right;
		}
	}
	return (NULL);
}
