/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 22:40:06 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/11 02:52:27 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_door.h"

int main()
{
	t_door door;

	open_door(&door);
	if (is_door_close(&door))
		open_door(&door);
	if (is_door_open(&door))
		close_door(&door);
	if (door.state == OPEN)
		close_door(&door);
	return (EXIT_SUCCESS);
}
