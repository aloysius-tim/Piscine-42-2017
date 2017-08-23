/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 01:57:28 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/11 08:49:51 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_perso.h"

int		main()
{
	t_perso		jack;

	jack.name = strdup("Jack");
	jack.life = 100.0;
	jack.age = 42;
	jack.profession = SAVE_AUSTIN_POWERS;
	(void)jack;
	return (0);
}
