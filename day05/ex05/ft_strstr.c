/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migriver <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 21:26:47 by migriver          #+#    #+#             */
/*   Updated: 2019/07/16 20:48:46 by migriver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_string_lenght(char *c);

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int ltf;

	ltf = ft_string_lenght(to_find);
	if (ltf == 0)
		return (str);
	i = -1;
	while (str[++i] != '\0')
	{
		j = 0;
		if (str[i] != to_find[j])
			continue ;
		while (to_find[j] != '\0')
		{
			if (str[i + j] != to_find[j])
				break ;
			j++;
		}
		if (ltf == j)
			return (&str[i]);
	}
	return ("\0");
}

int		ft_string_lenght(char *c)
{
	int i;

	i = 0;
	while (c[i] != '\0')
		i++;
	return (i);
}
