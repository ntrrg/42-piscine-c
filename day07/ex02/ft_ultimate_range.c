/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migriver <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 16:17:49 by migriver          #+#    #+#             */
/*   Updated: 2019/07/18 17:54:57 by migriver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int ln;

	if (min >= max)
	{
		*range = (void *)0;
		return (0);
	}
	i = -1;
	ln = max - min;
	*range = (int *)malloc(sizeof(**range) * ln);
	while (++i < ln)
		(*range)[i] = min + i;
	return (ln);
}
