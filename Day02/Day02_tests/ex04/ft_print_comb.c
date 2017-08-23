/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/02 10:46:16 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/04 10:16:42 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1,		 &c, 1);
	return (0);
}

void	ft_print_comb(void)
{

	int num_1;
	int num_2;
	int num_3;

	num_1=0;
	num_2=1;
	num_3=2;

	int max;
	max=789;

	int iteration;
	iteration = 1;
	int max_iteration;
	max_iteration=9;

	int iteration_1;
	int max_iteration_1;
	iteration_1=1;
	max_iteration_1=7;

	int iteration_2;
	int max_iteration_2;
	iteration_2=1;
	max_iteration_2=9;

	while(num_1!=8)
	{
		while(iteration_2<max_iteration_2)
		{
			max_iteration=max_iteration_2+1;
			num_3=num_2+1;

			while(iteration<max_iteration)
			{
				ft_putchar(num_1+'0');
				ft_putchar(num_2+'0');
				ft_putchar(num_3+'0');
			
				if(num_1*100+num_2*10+num_3 != 789)
				{
					ft_putchar(',');
					ft_putchar(' ');
				}

				num_3++;
				iteration++;
			
				if(num_3==10)
				{
					iteration=1;
					max_iteration-=2;
					//num_3=iteration_2+2;
					//num_3=num_2+1;
					break;
				}
			}
		
			num_2++;
			iteration_2++;

			

			if(num_2==9)
			{
				iteration_2=1;
				max_iteration_2--;
				//num_2=iteration_1+2;
				break;
			}

			/*max_iteration=max_iteration_2+1;
			num_3=num_2+1;
*/

		}
		iteration_1++;
		num_1++;
		//max_iteration_1--;

	    max_iteration_2=max_iteration_1+1;
		num_2=num_1+1;
		//max_iteration=max_iteration_2+1;
		//num_3=num_1+1;
	}
}

int main (void)
{
	ft_print_comb();
	return(0);
}

