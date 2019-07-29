/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migriver <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 12:55:40 by migriver          #+#    #+#             */
/*   Updated: 2019/07/13 12:55:44 by migriver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int result;

	if (nb < 0)
	{
		return (0);
	}
	else if (nb == 0)
	{
		return (1);
	}
	result = nb;
	while (--nb > 1)
	{
		result *= nb;
		if (result < 0)
		{
			return (0);
		}
	}
	return ((result < 0) ? 0 : result);
}
