/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 03:59:40 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/11 04:38:46 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_perso.h"

t_perso		**ft_decrypt(char *str);

int main()
{
	t_perso **tab;
	tab = ft_decrypt("1|Nom;2|Nom2;3|Nom3");
	for (int i = 0; tab[i] != 0; i++)
	{
		printf("%d|%s;", tab[i]->age, tab[i]->name);
	}
	return 0;
}
