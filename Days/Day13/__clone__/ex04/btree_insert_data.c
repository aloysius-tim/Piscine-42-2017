/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 09:12:54 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/18 15:00:50 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_insert_data(t_btree **root, void *item, int (*cmpf
)(void *, void *))
{
	t_btree *node;

	if (*root == NULL)
	{
		*root = btree_create_node(item);
		return ;
	}
	node = *root;
	if (cmpf(item, node->item) >= 0)
	{
		if (node->right)
			btree_insert_data(&(node->right), item, cmpf);
		else
			node->right = btree_create_node(item);
	}
	else if (cmpf(item, node->item) < 0)
	{
		if (node->left)
			btree_insert_data(&(node->left), item, cmpf);
		else
			node->left = btree_create_node(item);
	}
}
