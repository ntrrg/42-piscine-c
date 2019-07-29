/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migriver <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 11:16:58 by migriver          #+#    #+#             */
/*   Updated: 2019/07/13 12:42:00 by migriver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int result;

	if (nb < 0)
	{
		return (0);
	}
	else if (nb < 2)
	{
		return (1);
	}
	else if (nb > 12)
	{
		return (0);
	}
	result = nb * ft_recursive_factorial(nb - 1);
	return ((result < 0) ? 0 : result);
}
