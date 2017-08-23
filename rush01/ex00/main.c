/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 22:42:27 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/13 21:39:12 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./headers/ft_sudoku_util.h"
#include "./headers/ft_sudoku_solver.h"
#include "./headers/ft_last_check.h"

int		main(int argc, char *argv[])
{
	if (ft_check_valid_map(argc, argv) == 0 || ft_check_one_solution(argv) == 0)
	{
		ft_putstr("Error\n");
		return (-1);
	}
	ft_sudoku(argv);
	return (0);
}
