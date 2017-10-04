/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 17:41:28 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/16 23:35:39 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CAT_H
# define FT_CAT_H
# include <unistd.h>
# include <fcntl.h>
# define BUFFER 25

void	ft_display_file(char **name, int argc);
void	ft_display_input();
int		ft_strlen(char *str);
#endif
