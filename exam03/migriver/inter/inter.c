/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/02 10:22:37 by exam              #+#    #+#             */
/*   Updated: 2019/08/02 10:37:03 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	char	set[255];
	int		i;
	int		c;

	if (argc != 3)
		return (write(1, "\n", 1));
	i = -1;
	while (++i < 255)
		set[i] = 0;
	i = -1;
	while (argv[1][++i] != '\0')
		set[(int)argv[1][i]] = 1;
	i = -1;
	while (argv[2][++i] != '\0')
	{
		c = (int)argv[2][i];
		if (set[c] == 1)
		{
			write(1, &argv[2][i], 1);
			set[c] = 0;
		}
	}
	write(1, "\n", 1);
	return (0);
}
