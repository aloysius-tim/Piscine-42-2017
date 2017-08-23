/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 15:31:29 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/14 15:33:18 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

int main()
{
	t_list*elem1;

	elem1 = (t_list*)malloc(sizeof(t_list));
	elem1->next = NULL;
	elem1->data = "C";

	t_list*elem2;

	elem2 = (t_list*)malloc(sizeof(t_list));
	elem2->next = elem1;
	elem2->data = "B";

	t_list*elem3;

	elem3 = (t_list*)malloc(sizeof(t_list));
	elem3->next = elem2;
	elem3->data = "A";

	printf("%s", ft_list_last(elem3)->data);
}
