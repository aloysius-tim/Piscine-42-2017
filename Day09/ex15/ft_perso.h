/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perso.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 01:56:21 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/11 08:59:42 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PERSO_H
# define FT_PERSO_H
# include <string.h>
# define SAVE_THE_WORLD "42"

typedef struct		s_perso
{
	char	*name;
	float	life;
	int		age;
	char	*profession;
	int		points;
}					t_perso;

#endif
