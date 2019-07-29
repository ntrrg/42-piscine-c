/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migriver <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 21:39:13 by migriver          #+#    #+#             */
/*   Updated: 2019/07/19 04:14:19 by migriver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_is_word_separator(char c);
char	*ft_new_word(char *src, int i, int j);
int		ft_strwordcount(char *str);

char	**ft_split_whitespaces(char *str)
{
	char	**words;
	int		i;
	int		j;
	int		iw;

	words = (char **)malloc(sizeof(*words) * (ft_strwordcount(str) + 1));
	iw = 0;
	i = 0;
	j = 0;
	while (str[j] != '\0')
	{
		while (ft_is_word_separator(str[j]) == 1)
			j++;
		if (str[j] != '\0' && ft_is_word_separator(str[j]) == 0)
		{
			i = j;
			while (str[j] != '\0' && ft_is_word_separator(str[j]) == 0)
				j++;
			words[iw++] = ft_new_word(str, i, j);
		}
	}
	words[iw] = (void *)0;
	return (words);
}

char	*ft_new_word(char *src, int i, int j)
{
	char	*dest;
	int		id;

	dest = (char *)malloc(sizeof(*dest) * (j - i + 1));
	id = 0;
	while (i < j)
		dest[id++] = src[i++];
	dest[id] = '\0';
	return (dest);
}

int		ft_strwordcount(char *str)
{
	int		wc;
	int		i;

	wc = 0;
	i = 0;
	while (str[i] != '\0')
	{
		while (ft_is_word_separator(str[i]) == 1)
			i++;
		if (str[i] != '\0' && ft_is_word_separator(str[i]) == 0)
		{
			wc++;
			while (str[i] != '\0' && ft_is_word_separator(str[i]) == 0)
				i++;
		}
	}
	return (wc);
}

int		ft_is_word_separator(char c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (1);
	return (0);
}
