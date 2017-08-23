/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 15:31:29 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/16 06:40:07 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "ft_list.h"

void ft_list_push_back(t_list **begin_list, void *data);
void ft_list_push_front(t_list **begin_list, void *data);
int ft_list_size(t_list *begin_list);
t_list *ft_list_last(t_list *begin_list);
t_list *ft_list_push_params(int ac, char **av);
//void    ft_list_clear(t_list **begin_list);
t_list	*ft_list_at(t_list *begin_list, unsigned int nbr);
void	ft_list_sort(t_list **begin_list, int (*cmp)());

void    ft_print_list(t_list *list)
{
	t_list *current;
	int counter;

	current = list;
	counter = 0;
	while (current)
	{
		printf("N.%d = %s\n",counter,current->data);
		counter++;
		current = current->next;
	}
	printf("\n\n");
}

int main(int argc, char **argv)
{
	t_list **begin_list;
	begin_list = (t_list**)malloc(sizeof(t_list*));
	*begin_list = ft_list_push_params(argc,argv);
	*begin_list = NULL;
	ft_list_sort(begin_list, strcmp);
	ft_print_list(*begin_list);
	ft_sorted_list_insert(begin_list, "NgTaO1CyvYQu", strcmp);
	ft_print_list(*begin_list);
	return (0);
}
