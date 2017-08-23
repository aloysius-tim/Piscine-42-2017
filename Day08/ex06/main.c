/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 21:17:05 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/09 00:52:31 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

struct	s_stock_par	*ft_param_to_tab(int ac, char **av);

int main(int argc, char *argv[])
{
	struct s_stock_par *tab;
	tab = ft_param_to_tab(argc, argv);
	ft_show_tab(tab);
	return 0;
}
