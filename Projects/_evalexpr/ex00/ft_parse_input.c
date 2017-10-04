/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/20 16:59:39 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/20 17:53:24 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_parse_input.h"

void	handle_operator(char *str, t_list **heap_root, t_list **stack_root)
{
	char	*tmp_stack_elem;
	char	*tmp_heap_elem;

	tmp_stack_elem = NULL;
	tmp_heap_elem = NULL;
	if (*stack_root != NULL)
		tmp_stack_elem = (*stack_root)->data;
	if (*heap_root != NULL)
		tmp_heap_elem = (*heap_root)->data;
	if (*stack_root == NULL || *tmp_stack_elem == '(' || ft_is_prioritary(
*str, tmp_stack_elem) >= 1)
		ft_list_push_front(stack_root, ft_strndup(str, 1));
	else
	{
		while (*stack_root && tmp_stack_elem[0] != '(' && tmp_stack_elem[0
] != ')' && ft_is_prioritary(*str, tmp_stack_elem) < 1)
		{
			ft_list_push_back(heap_root, ft_list_pop_front(stack_root));
			if (*stack_root)
				tmp_stack_elem = (*stack_root)->data;
		}
		ft_list_push_front(stack_root, ft_strndup(str, 1));
	}
}

void	handle_parenthesis(char *str, t_list **heap_root, t_list **stack_root)
{
	char	*tmp_stack_elem;
	char	*tmp_heap_elem;

	tmp_stack_elem = NULL;
	tmp_heap_elem = NULL;
	if (*str == '(')
		ft_list_push_front(stack_root, ft_strndup(str, 1));
	else if (*str == ')')
		while ((tmp_stack_elem = ft_list_pop_front(stack_root)))
		{
			if (*tmp_stack_elem == '(')
			{
				free(tmp_stack_elem);
				break ;
			}
			ft_list_push_back(heap_root, tmp_stack_elem);
		}
}

void	ft_parse_input(char *str, t_list **heap_root, t_list **stack_root)
{
	char	*tmp_stack_elem;
	char	*tmp_heap_elem;
	char	*head;

	tmp_stack_elem = NULL;
	tmp_heap_elem = NULL;
	head = str;
	while (*str)
	{
		if (ft_is_operande(str, head))
		{
			ft_list_push_back(heap_root, ft_strndup(str, ft_count_size_number(
str)));
			str += (ft_count_size_number(str) - 1);
		}
		else if (*str == '(' || *str == ')')
			handle_parenthesis(str, heap_root, stack_root);
		else if (ft_is_operator(str))
			handle_operator(str, heap_root, stack_root);
		str++;
	}
	while (*stack_root != NULL)
		ft_list_push_back(heap_root, ft_list_pop_front(stack_root));
}
