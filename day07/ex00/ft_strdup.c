/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migriver <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 10:47:12 by migriver          #+#    #+#             */
/*   Updated: 2019/07/18 12:01:36 by migriver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str);

char	*ft_strdup(char *src)
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

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
