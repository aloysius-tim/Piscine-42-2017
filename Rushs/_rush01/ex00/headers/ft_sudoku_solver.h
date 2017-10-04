/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sudoku.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 22:54:53 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/13 21:43:14 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SUDOKU_SOLVER_H
# define FT_SUDOKU_SOLVER_H
# include <stdlib.h>
# include "ft_sudoku_util.h"
# include "ft_last_check.h"

int		**g_map;
void	ft_sudoku(char *argv[]);
t_bool	ft_solve_map(int **map, int current_position, int *nb_solutions);
t_bool	ft_is_on_bloc(int val, int bloc_x, int bloc_y, int **map);
t_bool	ft_is_on_colunm(int column, int val, int **map);
t_bool	ft_is_on_row(int row, int val, int **map);
#endif
