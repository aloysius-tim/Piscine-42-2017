/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fight.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 04:45:19 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/11 16:49:53 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fight.h"
#include "ft_perso.h"

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

void	kick(t_perso *attacker, t_perso *attacked)
{
	write(1, attacker->name, ft_strlen(attacker->name));
	write(1, " does a judo kick on ", 21);
	write(1, attacked->name, ft_strlen(attacked->name));
	write(1, "\n", 1);
}

void	punch(t_perso *attacker, t_perso *attacked)
{
	write(1, attacker->name, ft_strlen(attacker->name));
	write(1, " does a judo punch on ", 22);
	write(1, attacked->name, ft_strlen(attacked->name));
	write(1, "\n", 1);
}

void	headbutt(t_perso *attacker, t_perso *attacked)
{
	write(1, attacker->name, ft_strlen(attacker->name));
	write(1, " does a judo headbutt on ", 25);
	write(1, attacked->name, ft_strlen(attacked->name));
	write(1, "\n", 1);
}

void	ft_fight(t_perso *attacker, t_perso *attacked, int attack)
{
	if (attacker->life <= 0 || attacked->life <= 0)
		return ;
	if (attack == KICK)
	{
		attacked->life -= 15;
		kick(attacker, attacked);
	}
	else if (attack == PUNCH)
	{
		attacked->life -= 5;
		punch(attacker, attacked);
	}
	else if (attack == HEADBUTT)
	{
		attacked->life -= 20;
		headbutt(attacker, attacked);
	}
	if (attacked->life <= 0)
	{
		write(1, attacked->name, ft_strlen(attacked->name));
		write(1, " is dead.\n", 9);
	}
}
