/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 15:01:18 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/15 01:30:55 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

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

int main()
{
	t_list	*elem;

	elem = (t_list*)malloc(sizeof(t_list));
	elem->next = NULL;
	elem->data = "A";

	ft_list_push_back(&elem, "B");
	ft_list_push_back(&elem, "C");
	ft_list_push_back(&elem, "D");
	ft_list_push_back(&elem, "E");
	ft_print_list(elem);
}
