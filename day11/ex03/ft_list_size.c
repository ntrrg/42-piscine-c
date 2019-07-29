/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migriver <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 21:24:02 by migriver          #+#    #+#             */
/*   Updated: 2019/07/24 21:32:28 by migriver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int n;

	n = 0;
	if (begin_list == (void *)0)
		return (n);
	while (begin_list->next != (void *)0)
	{
		begin_list = begin_list->next;
		n++;
	}
	return (n + 1);
}
