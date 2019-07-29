/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 18:54:27 by exam              #+#    #+#             */
/*   Updated: 2019/07/12 20:07:39 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int i;
	int result;

	i = 0 - 1;
	result = 0;
	while (str[++i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
	   	{
			continue;
		}
		result = result * 10 + (str[i] - 48);
	}
	return (str[0] != '-') ? result : result * -1;
}