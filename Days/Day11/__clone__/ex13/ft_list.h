/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 14:40:37 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/14 23:35:02 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H
# include <stdlib.h>
# include <stdio.h>

typedef struct		s_list
{
	void			*data;
	struct s_list	*next;
}					t_list;
void				ft_list_merge(t_list **begin_list1, t_list *begin_list2);
#endif
