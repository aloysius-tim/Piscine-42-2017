/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 12:01:43 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/03 12:31:16 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int main(void)
{
	int a = 11;
	int b = 2;
	int div;
	int mod;
	int *pt_div;
	pt_div = &div;
	int *pt_mod;
	pt_mod = &mod;
	ft_div_mod(a, b, pt_div, pt_mod);
	printf("%d, %d", *pt_div, *pt_mod);
	return 0;
}
