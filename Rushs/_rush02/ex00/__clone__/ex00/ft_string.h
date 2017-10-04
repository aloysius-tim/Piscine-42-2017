/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/20 00:22:13 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/20 02:18:05 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRING_H
# define FT_STRING_H
# include <unistd.h>
# include <stdlib.h>

int		ft_strlen(char *str);
int		ft_putchar(char c, char *final);
void	ft_print_x_char(char c, int n, char *final);
char	*ft_strcat(char *dest, char *src);
char	*ft_strdup(char *src);
char	*ft_strcpy(char *dest, char *src);
int		ft_strcmp(char *s1, char *s2);
#endif
