/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fight.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 04:45:19 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/11 16:53:53 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ultimate_fight.h"
#include "ft_perso.h"
#include <string.h>

int		ft_strlen(char *str)
{
	int counter;

	counter = 0;
	while (*str != '\0')
	{
		counter++;
		str++;
	}
	return (counter);
}

void	kick(t_perso *attacker, t_perso *attacked, t_kick attack)
{
	write(1, attacker->name, ft_strlen(attacker->name));
	write(1, " does a judo ", 13);
	write(1, attack.name, ft_strlen(attack.name));
	write(1, " on ", 4);
	write(1, attacked->name, ft_strlen(attacked->name));
	write(1, "\n", 1);
}

t_kick	get_kick(int kick)
{
	const t_kick	kicks[12] = {
		{"kick1", 13},
		{"kick2", 3},
		{"kick3", 18},
		{"kick4", 9},
		{"kick5", 11},
		{"kick6", 13},
		{"kick7", 8},
		{"kick8", 6},
		{"kick9", 11},
		{"kick10", 9},
		{"kick11", 18},
		{"kick12", 10}};

	return (kicks[kick]);
}

void	ft_ultimate_fight(t_perso *attacker, t_perso *attacked, int attack)
{
	t_kick	atk;

	if (attacker->life <= 0 || attacked->life <= 0)
		return ;
	atk = get_kick(attack);
	attacked->life -= atk.points;
	kick(attacker, attacked, atk);
	if (attacked->life <= 0)
	{
		write(1, attacked->name, ft_strlen(attacked->name));
		write(1, " is dead.\n", 9);
	}
}
