/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/18 08:09:09 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/18 09:32:13 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	test(void *item, int current_level, int is_first_elem)
{
	printf("%s, %d, %d\n", item, current_level, is_first_elem);
}

int		main()
{
	t_btree *root;

	root = btree_create_node("2");
	root->left = btree_create_node("1");
	root->left->left = btree_create_node("0");
	root->left->right = btree_create_node("1");
	root->right = btree_create_node("4");
	root->right->left = btree_create_node("3");
	root->right->right = btree_create_node("5");
	btree_apply_by_level(root, test);
	return (0);
}
