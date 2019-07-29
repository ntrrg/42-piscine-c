/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migriver <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 13:36:57 by migriver          #+#    #+#             */
/*   Updated: 2019/07/19 13:58:24 by migriver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	part_of_day(int hour);

void	ft_takes_place(int hour)
{
	printf("THE FOLLOWING TAKES PLACE BETWEEN");
	printf(" %d.00 %c.M. AND", hour, part_of_day(hour));
	if (hour == 23)
		hour = -1;
	printf(" %d.00 %c.M.\n", hour + 1, part_of_day(hour + 1));
	return ;
}

char	part_of_day(int hour)
{
	if (hour < 12)
		return ('A');
	return ('P');
}
