/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fight.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 04:43:32 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/11 08:29:26 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ULTIMATE_FIGHT_H
# define FT_ULTIMATE_FIGHT_H
# include <unistd.h>
# define KICK1	0
# define KICK2	1
# define KICK3	2
# define KICK4	3
# define KICK5	4
# define KICK6	5
# define KICK7	6
# define KICK8	7
# define KICK9	8
# define KICK10	9
# define KICK11	10
# define KICK12	11

typedef struct	s_kick
{
	char	name[10];
	int		points;
}				t_kick;
#endif
