/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_to_reverse_polish_notation.h                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/18 16:10:42 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/20 17:43:31 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_TO_REVERSE_POLISH_NOTATION_H
# define FT_TO_REVERSE_POLISH_NOTATION_H
# include "ft_util.h"
# include "ft_list.h"
# include "ft_string.h"
# include "ft_parse_input.h"
# include "ft_check_format.h"
# include "ft_operations.h"
# include <stdlib.h>
# include <stdio.h>

int			ft_polish_calculator(t_list **heap_root, t_list **stack_root);
int			eval_expr(char *input);
void		*ft_get_function(char *op);
void		ft_list_clear(t_list **begin_list);
#endif
