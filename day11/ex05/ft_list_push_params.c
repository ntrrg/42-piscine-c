/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migriver <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 21:48:10 by migriver          #+#    #+#             */
/*   Updated: 2019/07/24 22:52:54 by migriver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_create_elem(void *data);

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*first;
	t_list	*nl;

	if (ac < 2)
		return (void *)0;
	nl = (void *)0;
	while (--ac > 0)
	{
		if (nl == (void *)0)
		{
			nl = ft_create_elem(av[ac]);
			first = nl;
		}
		else
		{
			nl->next = ft_create_elem(av[ac]);
			nl = nl->next;
		}
	}
	return (first);
}
