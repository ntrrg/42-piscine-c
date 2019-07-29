/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 18:43:03 by exam              #+#    #+#             */
/*   Updated: 2019/07/19 19:20:33 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_power(int base, int exp);

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char	result;
	int				i;
	int				j;

	result = 0;
	i = 7;
	j = 0;
	while (i >= 0 && j <= 7)
	{
		if (octet >= ft_power(2, i))
		{
			result += ft_power(2, j);
			octet -= ft_power(2, i);
		}
		i--;
		j++;
	}
	return (result);
}

int				ft_power(int base, int exp)
{
	int result;

	if (exp == 0)
		return (1);
	result = base;
	while (exp > 1)
	{
		result *= base;
		exp--;
	}
	return (result);
}
