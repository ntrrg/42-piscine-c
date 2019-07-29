/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migriver <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 15:23:14 by migriver          #+#    #+#             */
/*   Updated: 2019/07/25 21:17:47 by migriver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include "tools.h"
#define BUFSIZE 4096

int	main(int argc, char **argv)
{
	char buf[BUFSIZE + 1];
	int fd;
	int rb;

	if (argc < 2)
		return (ft_puterror(1, "File name missing.\n"));
	if (argc > 2)
		return (ft_puterror(1, "Too many arguments.\n"));
	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
		return (ft_puterror(1, "Can't open the file.\n"));
	while ((rb = read(fd, buf, BUFSIZE)) > 0)
		write(1, buf, rb);
	if (close(fd) < 0)
		return (ft_puterror(1, "Can't close the file.\n"));
	return (0);
}
