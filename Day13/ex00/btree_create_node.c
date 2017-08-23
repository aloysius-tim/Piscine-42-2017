/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 08:51:59 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/18 06:41:45 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

t_btree		*btree_create_node(void *item)
{
	t_btree	*elem;

	elem = (t_btree*)malloc(sizeof(t_btree));
	elem->right = NULL;
	elem->left = NULL;
	elem->item = item;
	return (elem);
}
