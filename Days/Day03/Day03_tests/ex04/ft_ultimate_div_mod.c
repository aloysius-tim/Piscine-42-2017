/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 12:21:49 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/03 12:27:26 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{
	int tmp_a;
	int tmp_b;
	tmp_a = *a;
	tmp_b = *b;
	*a = tmp_a / tmp_b;
	*b = tmp_a % tmp_b;
}

int main(void)
{
	int *a;
	int *b;
	int tmp_a;
	int tmp_b;
	tmp_a = 11;
	tmp_b = 2;
	a = &tmp_a;
	b = &tmp_b;
	ft_ultimate_div_mod(a, b);
	printf("%d, %d", *a, *b);
	return 0;
}
