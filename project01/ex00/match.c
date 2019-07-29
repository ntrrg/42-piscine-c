/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migriver <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 12:09:23 by migriver          #+#    #+#             */
/*   Updated: 2019/07/21 22:08:04 by migriver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

typedef struct	s_index
{
	int i;
	int j;
	int li;
	int lj;
}				t_index;

t_index			new_index(int i, int j, int li, int lj);

int				match(char *s1, char *s2)
{
	t_index i;

	i = new_index(0, -1, 0, -1);
	while (s2[++i.j] != '\0')
	{
		printf("s1[%d] = %c == s2[%d] = %c || s2[%d + 1] = %c\n", i.i, s1[i.i], i.j, s2[i.j], i.j, s2[i.j + 1]);
		while (s2[i.j] == '*' && s2[i.j + 1] == '*')
			i = new_index(i.i, i.j + 1, i.li, i.j + 1);
		if (s2[i.j] == '*' && s1[i.i] != s2[i.j + 1])
			i.j--;
		else if (s2[i.j] == '*' && s1[i.i] == s2[i.j + 1])
			i = new_index(i.i - 1, i.j, i.i + 1, i.j);
		else if (s2[i.j] != '*' && s1[i.i] == s2[i.j] && s2[i.j + 1] == '\0')
			i = new_index(i.i, i.lj - 1, i.li, i.lj);
		else if (s2[i.j] != '*' && s1[i.i] != s2[i.j] && i.lj > -1)
			i.j = i.lj - 1;
		else if (s2[i.j] != '*' && s1[i.i] != s2[i.j])
			return (0);
		i.i++;
	}
	if (s1[i.i] != '\0')
		return (0);
	return (1);
}

t_index			new_index(int i, int j, int li, int lj)
{
	t_index index;

	index.i = i;
	index.j = j;
	index.li = li;
	index.lj = lj;
	return (index);
}
