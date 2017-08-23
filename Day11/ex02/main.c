/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 15:12:49 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/14 15:15:02 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

int main()
{
	t_list*elem;

	elem = (t_list*)malloc(sizeof(t_list));
	elem->next = NULL;
	elem->data = "A";

	ft_list_push_front(&elem, "B");
	printf("%s", elem->data);
	printf("%s", (elem->next)->data);
}
