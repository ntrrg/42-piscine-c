/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migriver <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 12:18:01 by alm               #+#    #+#             */
/*   Updated: 2019/07/17 10:59:10 by migriver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int v;
	int h;

	v = 0;
	while (v < y)
	{
		h = 0;
		while (h < x)
		{
			if ((v == 0 && h == 0) || (v == y - 1 && h == 0))
				ft_putchar('A');
			else if ((v == 0 && h == x - 1) || (v == y - 1 && h == x - 1))
				ft_putchar('C');
			else if (v == 0 || h == 0 || h == x - 1 || v == y - 1)
				ft_putchar('B');
			else
				ft_putchar(' ');
			h++;
		}
		if (x > 0 && y > 0)
			ft_putchar('\n');
		v++;
	}
	return ;
}
