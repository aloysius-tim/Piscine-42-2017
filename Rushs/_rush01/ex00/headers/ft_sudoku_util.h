/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sudoku_util.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 23:03:39 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/13 21:36:56 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SUDOKU_UTIL_H
# define FT_SUDOKU_UTIL_H
# include "ft_last_check.h"
# include <stdlib.h>
# include <stdio.h>
# include <stdbool.h>
# define TRUE 1
# define FALSE 0

typedef	int		t_bool;
int				**ft_allocate_map();
void			ft_print_map(int **map);
int				**ft_init_map(char *argv[]);
int				**ft_clone_map(int **old);
t_bool			ft_is_verified(int **map);
extern	void	ft_putchar(char c);
extern	void	ft_putstr(char *str);
extern	int		ft_strlen(char *str);

#endif
