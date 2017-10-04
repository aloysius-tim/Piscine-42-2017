/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_to_reverse_polish_notation.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/18 16:11:12 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/20 18:37:32 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_to_reverse_polish_notation.h"

char	*ft_remove_space(char *str)
{
	int		i;
	int		j;
	char	*result;

	i = 0;
	j = 0;
	result = str;
	while (i < ft_strlen(str))
	{
		if (str[i] != ' ')
			result[j] = str[i];
		else
			j--;
		i++;
		j++;
	}
	result[j] = '\0';
	return (result);
}

int		eval_expr(char *input)
{
	t_list		*heap_root;
	t_list		*stack_root;
	int			final;

	heap_root = NULL;
	stack_root = NULL;
	ft_parse_input(ft_remove_space(input), &heap_root, &stack_root);
	final = (ft_polish_calculator(&heap_root, &stack_root));
	ft_list_clear(&heap_root);
	ft_list_clear(&stack_root);
	return (final);
}

int		ft_polish_calculator(t_list **heap_root, t_list **stack_root)
{
	char	*tmp;
	int		(*fct)(int, int);
	int		a;
	int		b;

	a = 0;
	b = 0;
	while (*heap_root)
		if (ft_is_numeric((*heap_root)->data) == 1)
			ft_list_push_front(stack_root, ft_list_pop_front(heap_root));
		else
		{
			tmp = ft_list_pop_front(heap_root);
			fct = ft_get_function(tmp);
			free(tmp);
			tmp = ft_list_pop_front(stack_root);
			a = ft_atoi(tmp);
			free(tmp);
			tmp = ft_list_pop_front(stack_root);
			b = ft_atoi(tmp);
			free(tmp);
			ft_list_push_front(stack_root, ft_itoa(fct(b, a)));
		}
	return (ft_atoi((*stack_root)->data));
}

void	*ft_get_function(char *op)
{
	if (*op == '-')
		return (minus_);
	if (*op == '+')
		return (plus_);
	if (*op == '*')
		return (multi_);
	if (*op == '%')
		return (mod_);
	if (*op == '/')
		return (div_);
	return (0);
}

void	ft_list_clear(t_list **begin_list)
{
	t_list *current;
	t_list *next;

	current = *begin_list;
	while (current)
	{
		next = current->next;
		free(current->data);
		free(current);
		current = next;
	}
	*begin_list = NULL;
}
