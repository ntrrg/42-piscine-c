/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migriver <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 19:17:31 by migriver          #+#    #+#             */
/*   Updated: 2019/07/16 15:48:39 by migriver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_string_lenght(char *c);

char	*ft_strcpy(char *dest, char *src)
{
	int i;
	int ls;

	ls = ft_string_lenght(src);
	i = 0;
	while (i <= ls)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

int		ft_string_lenght(char *c)
{
	int i;

	i = 0;
	while (c[i] != '\0')
		i++;
	return (i);
}
