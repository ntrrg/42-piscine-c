/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migriver <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 12:27:07 by migriver          #+#    #+#             */
/*   Updated: 2019/07/18 16:14:46 by migriver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int i;
	int ln;
	int	*range;

	if (min >= max)
		return ((void *)0);
	i = -1;
	ln = max - min;
	range = (int *)malloc(sizeof(*range) * ln);
	while (++i < ln)
		range[i] = min + i;
	return (range);
}
