/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migriver <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 17:40:09 by migriver          #+#    #+#             */
/*   Updated: 2019/07/18 21:35:44 by migriver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_count_argv_chars(int argc, char **argv);
int		ft_strlen(char *str);

char	*ft_concat_params(int argc, char **argv)
{
	int		n;
	int		i;
	int		j;
	int		si;
	char	*str;

	n = ft_count_argv_chars(argc, argv) + argc - 1;
	str = (char *)malloc(sizeof(*str) * n);
	i = 1;
	si = 0;
	while (i < argc)
	{
		j = -1;
		while (argv[i][++j] != '\0')
			str[si++] = argv[i][j];
		str[si++] = '\n';
		i++;
	}
	str[si - 1] = '\0';
	return (str);
}

int		ft_count_argv_chars(int argc, char **argv)
{
	int	n;

	n = 0;
	while (--argc > 0)
		n += ft_strlen(argv[argc]);
	return (n);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
