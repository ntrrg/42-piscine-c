/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migriver <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 16:51:07 by migriver          #+#    #+#             */
/*   Updated: 2019/07/11 22:57:16 by migriver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_comb2_from(char i, char j, char k, char l)
{
	while (k <= '9')
	{
		while (l <= '9')
		{
			ft_putchar(i);
			ft_putchar(j);
			ft_putchar(' ');
			ft_putchar(k);
			ft_putchar(l);
			if (i == '9' && j == '8' && k == '9' && l == '9')
			{
				break ;
			}
			ft_putchar(',');
			ft_putchar(' ');
			l++;
		}
		k++;
		l = '0';
	}
	return ;
}

void	ft_print_comb2(void)
{
	char i;
	char j;
	char k;
	char l;

	i = '0' - 1;
	while (++i <= '9')
	{
		j = '0' - 1;
		while (++j <= '9')
		{
			k = i;
			l = j + 1;
			ft_print_comb2_from(i, j, k, l);
			if (i == '9' && j == '8')
			{
				break ;
			}
		}
	}
	return ;
}
