/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/02 12:03:17 by exam              #+#    #+#             */
/*   Updated: 2019/08/02 13:53:55 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_itoa_base(int value, int base);
int		ft_nbr_length(unsigned int n, int base);

char	*ft_itoa_base(int value, int base)
{
	char			*str;
	int				sign;
	int				l;
	unsigned int	n;
	int				i;
	long			z;
	char			c;

	sign = 0;
	if (value < 0 && base == 10)
	{
		sign = 1;
		value *= -1;
	}
	n = value;
	l = ft_nbr_length(n, base);
	str = (char *)malloc(sizeof(char) * (sign + l + 1));
	i = 1;
	z = 1;
	while (i++ < l)
		z *= base;
	i = -1;
	if (sign == 1)
		str[++i] = '-';
	while (++i < sign + l)
	{
		c = n / z;
		n -= c * z;
		if (c < 10)
			c += '0';
		else
			c = c % 10 + 'A';
		str[i] = c;
		z /= base;
	}
	str[i] = '\0';
	return (str);
}

int		ft_nbr_length(unsigned int n, int base)
{
	int l;

	l = 1;
	while ((n = n / base) >= 1)
		l++;
	return (l);
}
