/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_alpha.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/02 13:57:46 by exam              #+#    #+#             */
/*   Updated: 2019/08/02 14:23:34 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#define N_ALPHA 26

int		is_alpha(char c);
char	to_lower(char c);

int		main(int argc, char **argv)
{
	int	set[N_ALPHA];
	int	i;
	int	c;

	if (argc != 2)
		return (printf("\n"));
	i = -1;
	while (++i < N_ALPHA)
		set[i] = 0;
	i = -1;
	while (argv[1][++i] != '\0')
		if (is_alpha(argv[1][i]))
			set[to_lower(argv[1][i]) - 'a']++;
	i = -1;
	while (argv[1][++i] != '\0')
	{
		if (!is_alpha(argv[1][i]))
			continue;
		c = to_lower(argv[1][i]) - 'a';
		if (set[c] > 0)
		{
			if (i > 0)
				printf(", ");
			printf("%d%c", set[c], c + 'a');
			set[c] = 0;
		}
	}
	printf("\n");
	return (0);
}

int		is_alpha(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

char	to_lower(char c)
{
	if (c < 'a')
		c += 'a' - 'A';
	return (c);
}
