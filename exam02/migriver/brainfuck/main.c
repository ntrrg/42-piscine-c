/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/26 19:41:32 by exam              #+#    #+#             */
/*   Updated: 2019/07/26 21:15:33 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#define BUF_SIZE 2048

void	brainfuck(char *buf, char *tasks);

int	main(int argc, char **argv)
{
	char	*buf;
	int		i;

	if (argc == 1)
	{
		write(1, "\n", 1);
		return (0);
	}
	buf = (char *)malloc(sizeof(char) * BUF_SIZE);
	i = 0;
	while (i < BUF_SIZE)
		buf[i++] = '\0';
	brainfuck(buf, argv[1]);
	free(buf);
	return (0);
}

void	brainfuck(char *buf, char *tasks)
{
	int	i;
	int	brackets;

	i = 0;
	brackets = 0;
	while (tasks[i] != '\0')
	{
		if (tasks[i] == '>')
			buf++;
		else if (tasks[i] == '<')
			buf--;
		else if (tasks[i] == '+')
			*buf += 1;
		else if (tasks[i] == '-')
			*buf -= 1;
		else if (tasks[i] == '.')
			write(1, buf, 1);
		else if (tasks[i] == '[')
		{
			if (*buf == '\0')
			{
				while (1)
				{
					if (tasks[i] == '[')
						brackets++;
					if (tasks[i] == ']')
						brackets--;
					if (brackets == 0 && tasks[i] == ']')
						break ;
					i++;
				}
				i--;
			}
		}
		else if (tasks[i] == ']')
		{
			if (*buf != '\0')
			{
				while (1)
				{
					if (tasks[i] == ']')
						brackets++;
					if (tasks[i] == '[')
						brackets--;
					if (brackets == 0 && tasks[i] == '[')
						break ;
					i--;
				}
				--i;
			}
		}
		i++;
	}
	return ;
}
