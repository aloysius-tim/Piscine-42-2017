/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_util.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/18 16:07:28 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/19 20:47:19 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_UTIL_H
# define FT_UTIL_H
# include <unistd.h>
# include <stdlib.h>
# define TRUE 1
# define FALSE 0

typedef int		t_bool;
int				ft_count_size_number(char *str);
t_bool			ft_is_prioritary(char new_char, char *top);
void			ft_putnbr(int nb);
int				ft_atoi(char *str);
char			*ft_itoa(int n);
#endif
