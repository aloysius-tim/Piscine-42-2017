/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexdump.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 23:43:31 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/17 05:41:03 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEXDUMP_H
# define FT_HEXDUMP_H
# include "ft_nbr_str_base.h"
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include <stdio.h>

char	*g_buffer;
char	*g_buffer2;
void	ft_hexdump(char **argv, char *buffer, char *buffer2, int fd, int argc);
char	*ft_nbr_str_base(unsigned int nbr, int base);
int		ft_strlen(char *str);
char	*ft_strcat(char *dest, char *src);
#endif
