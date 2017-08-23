/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 23:25:09 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/07 23:46:51 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_concat_params(int argc, char **argv);

int main(int argc, char *argv[])
{
	//printf("%s\n", *argv);
	printf("%s", ft_concat_params(argc, argv));
	return 0;
}
