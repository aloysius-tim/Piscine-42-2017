/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/19 12:06:33 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/19 12:57:49 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRING_H
# define FT_STRING_H
# include <stdlib.h>
# include <unistd.h>

int		ft_putchar(char c);
void	ft_putstr(char *str);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strndup(char *src, unsigned int size);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
char	*ft_strdup(char *src);
int		ft_strlen(char *str);
#endif
