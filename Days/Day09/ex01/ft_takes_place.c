/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 18:00:48 by tkeynes           #+#    #+#             */
/*   Updated: 2017/08/10 19:00:09 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int counter;

	counter = 0;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		counter++;
	}
	*dest = '\0';
	return (dest - counter);
}

void	ft_am(char *meridiem_a, char *meridiem_b, int *hour, int *hour_2)
{
	ft_strcpy(meridiem_a, "A.M.");
	ft_strcpy(meridiem_b, "A.M.");
	*hour_2 = *hour + 1;
	if (*hour == 12)
		ft_strcpy(meridiem_a, "P.M.");
	if (*hour == 11)
	{
		ft_strcpy(meridiem_b, "P.M.");
		*hour_2 = *hour + 1;
	}
	else if (*hour + 1 > 12)
	{
		ft_strcpy(meridiem_b, "P.M.");
		*hour_2 = *hour + 1 - 12;
	}
}

void	ft_pm(char *meridiem_a, char *meridiem_b, int *hour, int *hour_2)
{
	*hour -= 12;
	ft_strcpy(meridiem_a, "P.M.");
	*hour_2 = *hour + 1;
	if (*hour == 12)
		ft_strcpy(meridiem_a, "A.M.");
	else if (*hour + 1 == 12)
		ft_strcpy(meridiem_b, "A.M.");
	else if (*hour + 1 <= 12)
		ft_strcpy(meridiem_b, "P.M.");
	if (*hour + 1 > 12)
	{
		*hour_2 -= 12;
		ft_strcpy(meridiem_b, "A.M.");
	}
}

void	ft_takes_place(int hour)
{
	char	meridiem_a[5];
	char	meridiem_b[5];
	int		*hour_2;
	int		*hour_1;
	int		hour_2_val;

	hour_2_val = 0;
	hour_1 = &hour;
	hour_2 = &hour_2_val;
	if (*hour_1 <= 12)
	{
		ft_am(meridiem_a, meridiem_b, hour_1, hour_2);
	}
	else
	{
		ft_pm(meridiem_a, meridiem_b, hour_1, hour_2);
	}
	printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 %s AND %d.00 %s\n",
			*hour_1, meridiem_a, *hour_2, meridiem_b);
}
