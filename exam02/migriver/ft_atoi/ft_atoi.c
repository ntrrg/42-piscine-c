/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/26 18:30:00 by exam              #+#    #+#             */
/*   Updated: 2019/07/26 19:02:47 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define ATOI_SIGNS "+-"
#define ATOI_SPACES " \t\n\f\r\v"
#define ATOI_DIGITS "0123456789"

int	is_in(char c, char *str);

int	ft_atoi(const char *str)
{
	int		n;
	int		changed;
	char	sign;
	int		i;

	n = 0;
	changed = 0;
	sign = '\0';
	i = -1;
	while (str[++i] != '\0')
	{
		while (!changed && sign == '\0' && is_in(str[i], ATOI_SPACES))
			i++;
		if (!changed && sign == '\0' && is_in(str[i], ATOI_SIGNS))
		{
			sign = str[i];
			continue;
		}
		else if (!changed && sign != '\0' && is_in(str[i], ATOI_SIGNS))
			break ;
		else if (!is_in(str[i], ATOI_DIGITS))
			break ;
		n = n * 10 + (int)(str[i] - '0');
		changed = 1;
	}
	return (n * ((sign == '-') ? -1 : 1));
}

int	is_in(char c, char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (c == str[i])
			return (1);
		i++;
	}
	return (0);
}
