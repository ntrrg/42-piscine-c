/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migriver <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 23:39:55 by migriver          #+#    #+#             */
/*   Updated: 2019/07/16 23:43:02 by migriver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_is_digit(char c)

int ft_str_is_numeric(char *str)
	int i;

	i = -1;
	while (str[++i] != '\0')
		if (ft_char_is_digit(str[i]) == 0)
			return (0);
	return (1);
}

int	ft_char_is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
