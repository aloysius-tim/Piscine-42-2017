/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/02 21:09:13 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/03 11:48:55 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int main(void)
{
	int a;
	int b;
	int *pt_a;
	int *pt_b;
	
	a = 42;
	b = 43;
	pt_a = &a;
	pt_b = &b;
	ft_swap(pt_a, pt_b);
	printf("%d, %d", a, b);
}
