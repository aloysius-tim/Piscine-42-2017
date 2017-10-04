/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_format.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/19 11:44:57 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/20 16:45:09 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CHECK_FORMAT_H
# define FT_CHECK_FORMAT_H

int		ft_is_operande(char *str, char *head);
int		ft_is_operator(char *str);
int		ft_is_open_parenthesis(char *str);
int		ft_is_close_parenthesis(char *str);
int		ft_is_numeric(char *str);
#endif
