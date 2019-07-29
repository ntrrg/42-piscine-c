/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compact.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migriver <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 16:23:04 by migriver          #+#    #+#             */
/*   Updated: 2019/07/19 16:37:59 by migriver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_compact(char **tab, int length)
{
	int		i;
	int		j;
	int		n;
	char	**ntab;

	i = -1;
	while (++i < length)
		if (tab[i] != (void *)0)
			n++;
	if (n == 0)
	{
		tab = (void *)0;
		return (0);
	}
	ntab = (char **)malloc(sizeof(*ntab) * n);
	if (ntab == (void *)0)
		return (0);
	i = -1;
	j = -1;
	while (++i < length)
		if (tab[i] != (void *)0)
			ntab[++j] = tab[i];
	free(tab);
	tab = ntab;
	return (length - n);
}
