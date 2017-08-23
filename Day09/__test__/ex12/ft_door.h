/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 02:36:26 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/11 02:58:32 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DOOR_H
# define FT_DOOR_H
# include <unistd.h>
# define CLOSE 0
# define OPEN 1
# define TRUE 1
# define FALSE 0

typedef	struct	s_door
{
	int state;
}				t_door;
typedef int		t_bool;
void			ft_putstr(char *str);
t_bool			close_door(t_door *door);
t_bool			open_door(t_door *door);
t_bool			is_door_open(t_door *door);
t_bool			is_door_close(t_door *door);

#endif
