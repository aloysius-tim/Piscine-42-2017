/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 08:42:04 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/18 09:33:41 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BTREE_H
# define FT_BTREE_H
# include <stdlib.h>
# include <stdio.h>

typedef struct		s_btree
{
	struct s_btree	*left;
	struct s_btree	*right;
	void			*item;
}					t_btree;
typedef struct		s_file
{
	struct s_file	*next;
	struct s_btree	*elem;
	int				position;
	int				is_first_elem;
}					t_file;
void				btree_apply_by_level(t_btree *root, void (*applyf
)(void *item, int current_level, int is_first_elem));
t_btree				*btree_create_node(void *item);
#endif
