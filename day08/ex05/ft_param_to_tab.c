/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migriver <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 06:47:31 by migriver          #+#    #+#             */
/*   Updated: 2019/07/19 08:52:34 by migriver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

char				*ft_strdup(char *src);
int					ft_strlen(char *str);
char				**ft_split_whitespaces(char *str);

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	struct s_stock_par	*pars;
	int					i;

	pars = (struct s_stock_par *)malloc(sizeof(*pars) * ac);
	i = 0;
	while (i < ac)
	{
		pars[i].size_param = ft_strlen(av[i]);
		pars[i].str = (i < ac - 1) ? av[i] : (void *)0;
		pars[i].copy = ft_strdup(av[i]);
		pars[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	return (pars);
}

char				*ft_strdup(char *src)
{
	char	*dest;
	int		i;
	int		lsrc;

	lsrc = ft_strlen(src);
	i = -1;
	dest = (char *)malloc(sizeof(*dest) * (lsrc + 1));
	while (++i <= lsrc)
		dest[i] = src[i];
	return (dest);
}

int					ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
