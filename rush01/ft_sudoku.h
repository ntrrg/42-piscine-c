/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sudoku.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsshih <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 10:38:52 by hsshih            #+#    #+#             */
/*   Updated: 2019/07/21 23:28:52 by migriver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SUDOKU_H
# define FT_SUDOKU_H
# include <stdlib.h>
# include <stdio.h>
# include "ft_tools.h"

int		ft_count(int src[9][9]);
int		ft_input_test(int src[9][9]);
void	ft_mark_copy(int src[9][9][9], int cpy[9][9][9]);
void	ft_print_result(int src[9][9]);
int		ft_set_nbr(int src[9][9], int c, int r, int d);
int		ft_set_range(int d);
void	ft_sudoku_rec(int src[9][9], int *is_find, int mark[9][9][9]);
void	ft_table_copy(int src[9][9], int cpy[9][9]);
int		ft_table_trans(char **t_src, int table[9][9]);
int		ft_validate(int lines, char **t_src, int table[9][9]);

int		ft_count(int src[9][9])
{
	int	count;
	int	count_one;
	int	count_two;

	count = 0;
	count_one = 0;
	while (count_one < 9)
	{
		count_two = 0;
		while (count_two < 9)
		{
			if (src[count_one][count_two] != 0)
				count++;
			count_two++;
		}
		count_one++;
	}
	return (count);
}

int		ft_input_test(int src[9][9])
{
	int	one;
	int	two;
	int	temp;

	one = 0;
	while (one < 9)
	{
		two = 0;
		while (two < 9)
		{
			if (src[one][two] != 0)
			{
				temp = src[one][two];
				src[one][two] = 0;
				if (ft_set_nbr(src, one, two, temp))
					src[one][two] = temp;
				else
					return (0);
			}
			two++;
		}
		one++;
	}
	return (1);
}

void	ft_mark_copy(int src[9][9][9], int cpy[9][9][9])
{
	t_count count;

	count.i = 0;
	while (count.i < 9)
	{
		count.j = 0;
		while (count.j < 9)
		{
			count.k = 0;
			while (count.k < 9)
			{
				cpy[count.i][count.j][count.k] = src[count.i][count.j][count.k];
				count.k++;
			}
			count.j++;
		}
		count.i++;
	}
}

void	ft_print_result(int src[9][9])
{
	int count_one;
	int count_two;

	count_one = 0;
	while (count_one < 9)
	{
		count_two = 1;
		ft_putchar(src[count_one][0] + 48);
		while (count_two < 9)
		{
			ft_putchar(' ');
			ft_putchar(src[count_one][count_two] + 48);
			count_two++;
		}
		ft_putchar('\n');
		count_one++;
	}
}

int		ft_set_nbr(int src[9][9], int c, int r, int d)
{
	t_count	count;

	count.i = ft_set_range(c) - 4;
	while (++count.i < ft_set_range(c))
	{
		count.j = ft_set_range(r) - 4;
		while (++count.j < ft_set_range(r))
			if (d == src[count.i][count.j])
				return (0);
	}
	count.i = -1;
	while (++count.i < 9)
		if (d == src[count.i][r])
			return (0);
	count.j = -1;
	while (++count.j < 9)
		if (d == src[c][count.j])
			return (0);
	return (1);
}

int		ft_set_range(int d)
{
	if (d >= 0 && d <= 2)
		return (3);
	else if (d >= 3 && d <= 5)
		return (6);
	else if (d >= 6 && d <= 8)
		return (9);
	return (0);
}

void	ft_sudoku_rec(int src[9][9], int *is_find, int mark[9][9][9])
{
	int		next[9][9];
	int		new_mark[9][9][9];
	t_count	c;
	int		can_put;
	int		has_ans;

	if (*is_find)
		return ;
	c.i = 0;
	can_put = 0;
	has_ans = 0;
	ft_mark_copy(mark, new_mark);
	while (c.i < 9)
	{
		c.j = 0;
		while (c.j < 9)
		{
			if (src[c.i][c.j] == 0)
			{
				c.k = 1;
				can_put = 1;
				has_ans = 0;
				while (c.k <= 9)
				{
					if (mark[c.i][c.j][c.k - 1] != 1 &&
						ft_set_nbr(src, c.i, c.j, c.k))
					{
						has_ans = 1;
						ft_table_copy(src, next);
						next[c.i][c.j] = c.k;
						ft_sudoku_rec(next, is_find, new_mark);
						if (*is_find)
							return ;
						else
							new_mark[c.i][c.j][c.k - 1] = 1;
					}
					else if (ft_set_nbr(src, c.i, c.j, c.k) == 0)
						new_mark[c.i][c.j][c.k - 1] = 1;
					c.k++;
				}
				if (!has_ans)
					return ;
			}
			c.j++;
		}
		c.i++;
	}
	if (!can_put)
	{
		ft_print_result(src);
		*is_find = 1;
		return ;
	}
}

void	ft_table_copy(int src[9][9], int cpy[9][9])
{
	int	count_one;
	int	count_two;

	count_one = 0;
	while (count_one < 9)
	{
		count_two = 0;
		while (count_two < 9)
		{
			cpy[count_one][count_two] = src[count_one][count_two];
			count_two++;
		}
		count_one++;
	}
}

int		ft_table_trans(char **t_src, int table[9][9])
{
	t_count	c;

	c.i = 1;
	while (c.i <= 9)
	{
		c.j = 0;
		while (t_src[c.i][c.j] != '\0')
		{
			if (t_src[c.i][c.j] <= '9' && t_src[c.i][c.j] >= '0')
				table[c.i - 1][c.j] = t_src[c.i][c.j] - 48;
			else if (t_src[c.i][c.j] == '.')
				table[c.i - 1][c.j] = 0;
			else
				return (0);
			c.j++;
		}
		c.i++;
	}
	return (1);
}

int		ft_validate(int lines, char **t_src, int table[9][9])
{
	if (lines - 1 != 9)
		return (0);
	if (!ft_table_trans(t_src, table))
		return (0);
	if (!ft_input_test(table))
		return (0);
	return (1);
}

#endif
