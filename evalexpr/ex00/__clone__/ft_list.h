/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 14:40:37 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/19 20:11:44 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include "ft_string.h"

typedef struct		s_list
{
	void			*data;
	struct s_list	*next;
}					t_list;
t_list				*ft_create_elem(void *data);
void				ft_list_push_back(t_list **begin_list, void *data);
void				ft_list_push_front(t_list **begin_list, void *data);
void				*ft_list_pop_front(t_list **begin_list);
void				ft_print_list(t_list *list);
void				ft_clean_pile(t_list **h_pile, t_list **h_file);
int					ft_list_size(t_list *begin_list);
#endif
