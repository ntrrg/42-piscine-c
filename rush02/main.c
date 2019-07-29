/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arm <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/28 16:00:49 by arm               #+#    #+#             */
/*   Updated: 2019/07/28 18:56:23 by migriver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "ft_shape.h"
#define BUF_SIZE 2048

int	main(void)
{
	char *buf;
	int rb;
	int i;
	t_shape s;

	s = create_shape(0, 0, 0, 0);
	buf = (char *)malloc(sizeof(char) * BUF_SIZE);
	while ((rb = read(0, buf, BUF_SIZE)) != 0)
	{
		i = 0;
		while (i < rb)
		{
			printf("h: %d; y: %d -> '%c'\n", s.h, s.y, buf[i]);
			s.h++;
			if (buf[i] == '\n')
				set_shape(&s, 0, s.v + 1, s.h - 1, s.v + 1);
			i++;
		}
	}
	set_shape(&s, 0, 0, s.x, s.y);
	printf("s.x: %d; s.y: %d", s.x, s.y);
	return (0);
}
