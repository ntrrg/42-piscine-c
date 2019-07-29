/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/26 19:05:14 by exam              #+#    #+#             */
/*   Updated: 2019/07/26 19:20:41 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	print_and_exit(int errn, char *str);

int	main(int argc, char **argv)
{
	int i;
	int j;

	if (argc != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	i = 0;
	j = 0;
	while (argv[1][i] != '\0' && argv[2][j] != '\0')
	{
		if (argv[1][i] == argv[2][j])
			i++;
		j++;
	}
	if (argv[1][i] == '\0')
		write(1, "1\n", 2);
	else
		write(1, "0\n", 2);
	return (0);
}
