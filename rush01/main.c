/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsshih <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 10:36:34 by hsshih            #+#    #+#             */
/*   Updated: 2019/07/21 23:22:50 by migriver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sudoku.h"

int	main(int argc, char **argv)
{
	int		table[9][9];
	int		mark[9][9][9];
	int		is_find;
	t_count	count;

	if (!ft_validate(argc, argv, table))
	{
		ft_putstr("Error\n");
		return (0);
	}
	count.i = -1;
	while (++count.i < 9)
	{
		count.j = -1;
		while (++count.j < 9)
		{
			count.k = -1;
			while (++count.k < 9)
				mark[count.i][count.j][count.k] = 0;
		}
	}
	is_find = 0;
	ft_sudoku_rec(table, &is_find, mark);
	return (0);
}
