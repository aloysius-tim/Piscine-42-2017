/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 04:46:11 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/11 07:48:27 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ultimate_fight.h"
#include "ft_perso.h"
#include <stdlib.h>

void	ft_ultimate_fight(t_perso *attacker, t_perso *attacked, int attack);

int main()
{
	t_perso *nicolas_bauer;
	t_perso *anastacia;

	nicolas_bauer = (t_perso*)malloc(sizeof(t_perso));
	anastacia = (t_perso*)malloc(sizeof(t_perso));
	nicolas_bauer->name = "Nicolas Bauer";
	anastacia->name = "Anastacia";
	nicolas_bauer->points = 50;
	anastacia->points = 50;

	ft_ultimate_fight(nicolas_bauer, anastacia, KICK1);
	ft_ultimate_fight(anastacia, nicolas_bauer, KICK2);
	ft_ultimate_fight(nicolas_bauer, anastacia, KICK3);
	ft_ultimate_fight(anastacia, nicolas_bauer, KICK1);
	ft_ultimate_fight(nicolas_bauer, anastacia, KICK5);
	ft_ultimate_fight(nicolas_bauer, anastacia, KICK12);
	return 0;
}
