/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tools.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migriver <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 20:05:09 by migriver          #+#    #+#             */
/*   Updated: 2019/07/21 23:27:17 by migriver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_TOOLS_H
# define FT_TOOLS_H
# include <unistd.h>

typedef struct	s_index
{
	int i;
	int j;
	int k;
}				t_count;

void			ft_putchar(char c);
void			ft_putstr(char *str);
t_count			new_count(int i, int j, int k);

t_count			new_count(int i, int j, int k)
{
	t_count index;

	index.i = i;
	index.j = j;
	index.k = k;
	return (index);
}

void			ft_putchar(char c)
{
	write(1, &c, 1);
	return ;
}

void			ft_putstr(char *str)
{
	int ptr_count;

	ptr_count = 0;
	while (str[ptr_count] != '\0')
	{
		ft_putchar(str[ptr_count]);
		ptr_count++;
	}
	return ;
}
#endif
