/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migriver <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 22:03:07 by migriver          #+#    #+#             */
/*   Updated: 2019/07/25 23:39:35 by migriver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TOOLS_H
# define TOOLS_H
# include <errno.h>
# include <unistd.h>

void	ft_putchar(char c);
int		ft_puterror(int errn, char *msg);
void	ft_putstr(char *str);
int		ft_putsyserror(int errn);

void	ft_putchar(char c)
{
	write(1, &c, 1);
	return ;
}

int		ft_puterror(int errn, char *msg)
{
	int i;

	i = 0;
	while (msg[i] != '\0')
	{
		write(2, &msg[i], 1);
		i++;
	}
	return (errn);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	return ;
}

int		ft_putsyserror(int errn)
{
	char *msg;

	msg = "";
	if (errn == EACCES)
		msg = "Permission denied\n";
	else if (errn == EISDIR)
		msg = "Is a directory\n";
	else if (errn == ENOENT)
		msg = "No such file or directory\n";
	return (ft_puterror(errn, msg));
}
#endif
