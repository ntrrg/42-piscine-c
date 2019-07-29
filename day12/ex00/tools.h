/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migriver <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 15:21:29 by migriver          #+#    #+#             */
/*   Updated: 2019/07/25 21:15:50 by migriver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TOOLS_H
# define TOOLS_H
# include <unistd.h>

int		ft_puterror(int errn, char *msg);

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
#endif
