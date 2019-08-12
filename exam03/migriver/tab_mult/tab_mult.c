/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/02 10:52:09 by exam              #+#    #+#             */
/*   Updated: 2019/08/02 11:31:08 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void putnbr(int n);

int main(int argc, char **argv)
{
	int i;
	int n;
	if (argc != 2)
		return (write(1, "\n", 1));
	i = -1;
	n = 0;
	while (argv[1][++i] != '\0')
		n = n * 10 + argv[1][i] - '0';
	i = 0;
	while (++i < 10)
	{
		putnbr(i);
		write(1, " x ", 3);
		putnbr(n);
		write(1, " = ", 3);
		putnbr(i * n);
		write(1, "\n", 1);
	}
	return (0);
}

int nbr_length(int n)
{
	int l;
	int z;

	l = 1;
	z = 10;
	while (n > z)
	{
		l++;
		z *= 10;
	}
	return (l);
}

void putnbr(int n)
{
	char c;
	int i;
	int l;
	int z;

	i = 1;
	l = nbr_length(n);
	z = 1;
	while (i++ < l)
		z *= 10;
	i = 0;
	while (i++ < l)
	{
		c = n / z;
		n -= c * z;
		c += '0';
		write(1, &c, 1);
		z /= 10;
	}
	return ;
}
