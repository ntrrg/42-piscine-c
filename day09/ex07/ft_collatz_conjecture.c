/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migriver <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 15:40:29 by migriver          #+#    #+#             */
/*   Updated: 2019/07/19 15:52:58 by migriver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	unsigned int is_odd;

	is_odd = (base - 1) % 2;
	if (is_odd == 1)
		return ft_collatz_conjecture((base - 1) / 2);
	return ft_collatz_conjecture(3 * (base - 1) + 1);
}
