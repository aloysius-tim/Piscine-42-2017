/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_last_check.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/13 21:15:55 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/13 21:43:48 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LAST_CHECK_H
# define FT_LAST_CHECK_H
# include "ft_sudoku_util.h"

typedef int	t_bool;
t_bool		ft_check_row(int row, int test, int **map);
t_bool		ft_check_column(int column, int test, int **map);
t_bool		ft_check_bloc(int test, int bloc_x, int bloc_y, int **map);
t_bool		ft_check_one_solution(char *argv[]);
t_bool		ft_check_valid_map(int argc, char *argv[]);

#endif
