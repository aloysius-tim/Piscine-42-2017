/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_by_level.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 11:41:24 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/18 15:00:12 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

t_file	*create_elem_file(t_btree *elem, int position, int is_first_elem)
{
	t_file	*file;

	file = (t_file *)malloc(sizeof(t_file));
	file->next = NULL;
	file->elem = elem;
	file->position = position;
	file->is_first_elem = is_first_elem;
	return (file);
}

void	enf(t_file **root, t_btree *elem, int position)
{
	t_file	*head;

	head = *root;
	if (!(*root))
	{
		*root = create_elem_file(elem, position, 0);
		return ;
	}
	while ((*root)->next)
		*root = (*root)->next;
	(*root)->next = create_elem_file(elem, position, 0);
	*root = head;
}

t_file	*def(t_file **root)
{
	t_file *def_elem;

	def_elem = *root;
	*root = (*root)->next;
	return (def_elem);
}

void	btree_apply_by_level(t_btree *root, void (*applyf)(void *item
, int current_level, int is_first_elem))
{
	t_file	*root_file;
	t_file	*current_file_elem;
	int		position;

	position = 0;
	if (!root)
		return ;
	root_file = create_elem_file(root, position, 1);
	while (root_file)
	{
		position++;
		current_file_elem = def(&root_file);
		applyf(current_file_elem->elem->item, current_file_elem->position
, current_file_elem->is_first_elem);
		if (current_file_elem->elem->left)
			enf(&root_file, current_file_elem->elem->left, position);
		if (current_file_elem->elem->right)
			enf(&root_file, current_file_elem->elem->right, position);
		free(current_file_elem);
	}
}
