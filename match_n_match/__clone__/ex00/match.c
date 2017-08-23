/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 01:38:51 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/13 20:31:08 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		match(char *s1, char *s2);
int		match_star(char *s1, char *s2);

int		ft_strlenstar(char *str)
{
	int count;

	count = 0;
	while ((*str) && (*str != '*'))
	{
		str++;
		count++;
	}
	return (count);
}

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	if (!n)
		return (0);
	while (*s1 == *s2)
	{
		if (!*s1)
			break ;
		s1++;
		s2++;
	}
	if (*s2 == '*')
		return (0);
	return (*s1 - *s2);
}

int		match_star(char *s1, char *s2)
{
	char *next_pat;

	next_pat = s2 + 1;
	if (!*next_pat)
		return (1);
	while ((*s1) && (*s1 != *next_pat))
		(s1)++;
	if (!*s1)
		return (0);
	else if (ft_strncmp(s1, next_pat, ft_strlenstar(next_pat)))
		return (match(s1 + 1, next_pat - 1));
	else
		return (match(s1, next_pat));
}

int		match(char *s1, char *s2)
{
	while ((*s2 == '*') && *(s2 + 1) == '*')
		s2++;
	if (!*s1 && !*s2)
		return (1);
	if ((*s1 && !*s2) || ((!*s1) && (*s2 != '*')))
		return (0);
	if ((!*s1) && (*s2 == '*'))
		return (match(s1, s2 + 1));
	if ((*s1 == *s2) && (*s1 != '*'))
		return (match(s1 + 1, s2 + 1));
	if (*s1 != *s2 && *s2 != '*')
		return (0);
	if ((*s1) && (*s2 == '*'))
		return (match_star(s1, s2));
	return (1);
}
