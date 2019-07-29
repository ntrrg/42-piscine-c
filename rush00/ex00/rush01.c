/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migriver <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 18:19:45 by migriver          #+#    #+#             */
/*   Updated: 2019/07/14 20:42:19 by migriver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_is_corner(int x, int y, int h, int v)
{
	if ((v == 0 && h == 0) || (v == 0 &&  h == x - 1))
		return (1);
	else if ((h == 0 && v == y - 1) || (h == x - 1 && v  == y - 1))
		return (1);
	return (0);
}

char	ft_corner_symbol(int h, int v){
	if (h == 0 && v == 0)
		return ('/');
	else if (h== 0 || v == 0)
		return ('\\');
	return ('/');
}

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
			if (ft_is_corner(x, y, h, v) == 1)
				ft_putchar(ft_corner_symbol(h, v));
			else if (v == 0 || h == 0 || h == x - 1 || v == y - 1)
				ft_putchar('*');
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
