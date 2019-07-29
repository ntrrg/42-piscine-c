/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migriver <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 14:24:51 by migriver          #+#    #+#             */
/*   Updated: 2019/07/16 23:09:29 by migriver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_int_length(int nb);
int		ft_power(int nb, int power);
void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	int i;
	int n;
	int p;
	int last;

	last = nb % 10;
	nb /= 10;
	if (nb < 0 || last < 0)
	{
		ft_putchar('-');
		nb *= -1;
		last *= -1;
	}
	i = ft_int_length(nb);
	while (i > 0 && nb > 0)
	{
		p = ft_power(10, i - 1);
		n = nb / p;
		ft_putchar('0' + n);
		nb -= n * p;
		i--;
	}
	ft_putchar('0' + last);
	return ;
}

int		ft_int_length(int nb)
{
	int i;
	int zeros;

	if (nb < 0)
		nb *= -1;
	i = 1;
	zeros = 10;
	while (zeros < nb)
	{
		zeros *= 10;
		i++;
		if (zeros < 0)
			return (i);
	}
	return (i);
}

int		ft_power(int nb, int power)
{
	int result;

	if (power < 0 || nb == 0)
		return (0);
	if (power == 0)
		return (1);
	result = nb;
	while (power > 1)
	{
		result *= nb;
		power--;
	}
	return (result);
}
