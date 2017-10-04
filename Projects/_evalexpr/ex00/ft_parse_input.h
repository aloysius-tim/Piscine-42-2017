/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_input.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/20 16:59:17 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/20 17:35:36 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PARSE_INPUT_H
# define FT_PARSE_INPUT_H
# include "ft_util.h"
# include "ft_list.h"
# include "ft_string.h"
# include "ft_check_format.h"
# include "ft_operations.h"
# include <stdlib.h>
# include <stdio.h>

void	ft_parse_input(char *str, t_list **heap_root, t_list **stack_root);
void	handle_operator(char *str, t_list **heap_root, t_list **stack_root);
void	handle_parenthesis(char *str, t_list **heap_root, t_list **stack_root);
#endif
