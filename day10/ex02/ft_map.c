/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migriver <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 18:45:00 by migriver          #+#    #+#             */
/*   Updated: 2019/07/22 19:01:15 by migriver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int *ntab;
	int i;

	ntab = (int *)malloc(sizeof(*tab) * length);
	i = -1;
	while (++i < length)
		ntab[i] = f(tab[i]);
	return (ntab);
}
