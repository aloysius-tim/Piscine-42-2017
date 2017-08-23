/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/02 10:46:16 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/02 15:47:52 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1,		 &c, 1);
	return (0);
}

void	ft_print_comb2(void)
{
	int nb1;
	int nb2;
	int nb3;
	int nb4;
	nb1=0;
	nb2=0;
	nb3=0;
	nb4=1;

	int comb1;
	int comb2;
	comb1=0;
	comb2=1;

	int nb_iteration;
	nb_iteration=1;

	while(comb1<98)
	{
		if(comb2==100)
		{
			nb3=0;
			nb4=nb_iteration+1;
		}

		comb1 = nb1*10 + nb2;
		comb2 = nb3*10 + nb4;

		while(comb2<100)
		{
			if(comb1<comb2){
				ft_putchar(nb1+'0');
				ft_putchar(nb2+'0');
				ft_putchar(' ');
				ft_putchar(nb3+'0');
				ft_putchar(nb4+'0');
				
				if(comb2+comb1!=197)
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}

			if(nb4==9)
			{
				nb4=0;
				nb3++;
			}
			else
			{
				nb4++;
			}

			comb2 = nb3*10 + nb4;
		}


		if(nb2==9)
		{
			nb2=0;
			nb1++;
		}
		else
		{
			nb2++;
		}
	}
}

int main (void)
{
	ft_print_comb2();
	return(0);
}

