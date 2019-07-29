/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brainfuck.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 21:15:06 by exam              #+#    #+#             */
/*   Updated: 2019/07/19 21:56:43 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAINFUCK_H
# define BRAINFUCK_H
# define BF_SYMBOLS "><+-.[]"
# include <unistd.h>

void	brainfuck(char *str);
void	brainfuck_task(char *buf, char operation);
void	ft_putchar(char c);
int		is_valid(char *range, char c);

void	brainfuck(char *str)
{
	char	buf[2048];
	int		i;
	int		j;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '[')
		{
			if (buf != 0)
				continue;
			j = i;
		}
		if (str[i] == ']')
		{
			if (buf == 0)
				continue;
		}
		brainfuck_task(buf, str[i]);
		i++;
	}
	return ;
}

void	brainfuck_task(char *buf, char c)
{
	if (is_valid(BF_SYMBOLS, c))
		return ;
	if (c == '>')
		buf++;
	else if (c == '<')
		buf--;
	else if (c == '+')
		*buf = *buf + 1;
	else if (c == '-')
		*buf = *buf - 1;
	else if (c == '.')
		ft_putchar(c);
	return ;
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
	return ;
}

int		is_valid(char *range, char c)
{
	int i;

	i = -1;
	while (range[++i] != '\0')
		if (range[i] == c)
			return (1);
	return (0);
}
#endif
