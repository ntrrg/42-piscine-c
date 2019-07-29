/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 19:26:33 by exam              #+#    #+#             */
/*   Updated: 2019/07/19 20:28:59 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define SIGNS "-+"
#define SPACES " \n\t\f\r"
#define DIGITS "0123456789abcdefABCDEF"
#include <stdio.h>

int	get_value(char c);
int	is_valid(char c, char *range);

int	ft_atoi_base(const char *str, int str_base)
{
	int result;
	int i;

	result = 0;
	i = 0;
	if (is_valid(str[0], SIGNS) == 1 && is_valid(str[i + 1], DIGITS) == 0)
		return (result);
	if (is_valid(str[0], SIGNS) == 1)
		i++;
	while (is_valid(str[i], SPACES) == 1)
		i++;
	while (str[i] != '\0')
	{
		if (is_valid(str[i], DIGITS) == 0 || get_value(str[i]) > str_base - 1)
			return (result);
		result = result * str_base + get_value(str[i]);
		i++;
	}
	return (result * ((str[0] == '-') ? -1 : 1));
}

int	get_value(char c)
{
	if (c >= 'a' && c <= 'f')
		return (c - 'a' + 10);
	if (c >= 'A' && c <= 'F')
		return (c - 'A' + 10);
	return (c - '0');
}

int	is_valid(char c, char *range)
{
	int i;

	i = -1;
	while (range[++i] != '\0')
		if (range[i] == c)
			return (1);
	return (0);
}
