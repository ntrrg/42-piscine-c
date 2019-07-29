/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 18:31:33 by exam              #+#    #+#             */
/*   Updated: 2019/07/12 18:47:18 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c);

int	main()
{
	char c;

	c = 'z';
	while (c >= 'a')
	{
		if (c % 2 != 0)
		{
			putchar(c - 32);
		}
		else
		{
			putchar(c);
		}
		c--;
	}
	putchar('\n');
	return (0);
}

void	putchar(char c)
{
	write(1, &c, 1);
	return ;
}
