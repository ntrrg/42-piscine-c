/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tail.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migriver <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 23:38:21 by migriver          #+#    #+#             */
/*   Updated: 2019/07/25 23:47:30 by migriver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TAIL_H
# define TAIL_H
# include <sys/types.h>
# define BUFSIZE 4096

ssize_t	ft_pipe(int ifd, int ofd);

ssize_t	ft_file_size(char *name)
{
	int	fd;
	char	buf[BUFSIZE + 1];
	ssize_t	tb;
	ssize_t	rb;

	fd = open(open, O_RDWR);
	if (fd < 0)
		return (0);
	tb = 0;
	while ((rb = read(ifd, buf, BUFSIZE)) > 0)
		tb += rb;
	close(fd);
	return (tb);
}

ssize_t	ft_pipe(int ifd, int ofd)
{
	char	buf[BUFSIZE + 1];
	ssize_t	wb;
	ssize_t	rb;

	wb = 0;
	while ((rb = read(ifd, buf, BUFSIZE)) > 0)
		wb += write(ofd, buf, rb);
	return (wb);
}
#endif
