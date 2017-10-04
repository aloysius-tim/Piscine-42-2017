/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_par.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 17:50:15 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/09 00:55:29 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_PAR_H
# define FT_STOCK_PAR_H
# include <stdlib.h>

typedef	struct		s_stock_par
{
	int		size_param;
	char	*str;
	char	*copy;
	char	**tab;
}					t_stock_par;
void				ft_show_tab(struct s_stock_par *par);
void				ft_putchar(char c);
void				ft_putstr(char *str);
void				ft_print_words_tables(char **tab);
void				ft_putnbr(int nb);
#endif
