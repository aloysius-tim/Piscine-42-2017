/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoblech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 01:42:06 by hsoblech          #+#    #+#             */
/*   Updated: 2017/08/23 20:00:37 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <errno.h>
# define BUF_SIZE 1000

typedef struct	s_map
{
	int			**tab;
	int			col;
	int			row;
	char		vide;
	char		obst;
	char		plein;
}				t_map;

void			ft_display(char *file_name);
int				ft_resolve(t_map *map);
void			ft_print_tab(int **tab, int row, int col);
int				min(int a, int b, int c);
int				ft_bsq(t_map *map);
t_map			*ft_read_from_file(char *file_name, int i);
t_map			*ft_read_from_stdin();
int				ft_get_map_col(char *str, t_map *map);
int				**ft_parse_tab(int **tab, char *str, t_map *map, int s);
int				ft_atoi(char *str);
int				ft_strlen(char *str);
void			ft_putchar(char c);
int				t_size_number(int a);
char			*ft_strcat(char *dest, char *src);
t_map			*ft_parse_map(char *str);
void			ft_print(t_map *map, int size, int compt);
void			ft_print_2();
t_map			*ft_read_from_stdin();
void			ft_putstr(char *str);
int				ft_size_number(int a);
void			ft_putchar_loop(char c, int size);
void			ft_print_square_1(int *b, int *j, int size, char c);
void			ft_print_square_2(int *compt, int *j, int size, char c);
void			ft_print_init(int *i, int *j, int *b, int *bool_);
void			ft_parse_tab_init(int *i, int *j);
void			ft_parse_map_first_line(t_map *map, char *str, int *size);
int				ft_strlen_to_newline(char *str);
int				**ft_init_tab(int row, int col);
void			ft_puterror(char *str);
void			ft_clean_tab(int x, int **tab);
#endif
