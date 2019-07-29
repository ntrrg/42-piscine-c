/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countdown.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 18:24:07 by exam              #+#    #+#             */
/*   Updated: 2019/07/12 18:27:15 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c);

int	main()
{
	char c;

	c = '9';
	while (c >= '0')
	{
		putchar(c--);
	}
	putchar('\n');
	return (0);
}

void	putchar(char c)
{
	write(1, &c, 1);
	return ;
}
