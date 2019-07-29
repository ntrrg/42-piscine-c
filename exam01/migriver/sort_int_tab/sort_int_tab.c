/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 20:38:26 by exam              #+#    #+#             */
/*   Updated: 2019/07/19 21:07:16 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	sort_int_tab(int *tab, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	int				x;

	i = -1;
	while (++i < size)
	{
		j = i + 1;
		while (tab[i] <= tab[j] && j < size)
			j++;
		if (j >= size)
			continue;
		x = tab[i];
		tab[i] = tab[j];
		tab[j] = x;
		i = -1;
	}
}
