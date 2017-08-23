/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 08:42:04 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/17 08:54:26 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BTREE_H
# define FT_BTREE_H
# include <stdlib.h>

typedef struct	s_btree
{
	struct s_tree	*left;
	struct s_tree	*right;
	void			*item;
}				t_btree;
t_btree			*btree_create_node(void *item);
#endif
