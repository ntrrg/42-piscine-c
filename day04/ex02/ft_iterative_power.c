/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migriver <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 11:23:12 by migriver          #+#    #+#             */
/*   Updated: 2019/07/13 15:50:54 by migriver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int result;

	if (power < 0 || nb == 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	result = nb;
	while (power > 1)
	{
		result *= nb;
		power--;
	}
	return (result);
}
