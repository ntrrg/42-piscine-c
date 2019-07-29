/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migriver <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 22:02:02 by migriver          #+#    #+#             */
/*   Updated: 2019/07/25 23:39:46 by migriver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include "tools.h"
#include "tail.h"
#define PRINT_FILE_NAME(name) if (argc > 4) {\
	if (i > 4) \
		ft_putchar('\n'); \
	ft_putstr("==> "); \
	ft_putstr(name); \
	ft_putstr(" <==\n"); \
}
#define PRINT_SYS_ERROR(prog, file) if (fd < 0) {\
		ft_puterror(1, prog); \
		ft_puterror(1, ": "); \
		ft_puterror(1, file); \
		ft_puterror(1, ": "); \
		ft_putsyserror(errno); \
		continue; \
	}

int	main(int argc, char **argv)
{
	int i;
	int fd;

	if (argc < 4)
		ft_pipe(0, 1);
	i = 2;
	while (++i < argc)
	{
		fd = open(argv[i], O_RDWR);
		PRINT_SYS_ERROR(argv[0], argv[i])
		PRINT_FILE_NAME(argv[i])
		ft_pipe(fd, 1);
		close(fd);
	}
	return (0);
}
