/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migriver <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 21:27:35 by migriver          #+#    #+#             */
/*   Updated: 2019/07/16 22:05:50 by migriver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int i;

	i = -1;
	while (str[++i] != '\0')
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
	return (str);
}