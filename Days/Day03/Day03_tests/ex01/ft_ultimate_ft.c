/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/02 20:43:58 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/03 13:40:10 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int var;
int *ptr1;
int **ptr2;
int ***ptr3;
int ****ptr4;
int *****ptr5;
int ******ptr6;
int *******ptr7;
int ********ptr8;

void	ft_ultimate_ft(int *********nbr)
{
	var = 42;
	ptr1 = &var;
	ptr2 = &ptr1;
	ptr3 = &ptr2;
	ptr4 = &ptr3;
	ptr5 = &ptr4;
	ptr6 = &ptr5;
	ptr7 = &ptr6;
	ptr8 = &ptr7;
	nbr = &ptr8;
}

int main(void)
{
	int *********nbr;
	ptr1 = NULL;
	ptr2 = &ptr1;
	ptr3 = &ptr2;
	ptr4 = &ptr3;
	ptr5 = &ptr4;
	ptr6 = &ptr5;
	ptr7 = &ptr6;
	ptr8 = &ptr7;
	nbr = &ptr8;

	ft_ultimate_ft(nbr);
	printf("%d", *********nbr);
	return 0;
}
