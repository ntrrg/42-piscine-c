/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migriver <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 20:20:59 by migriver          #+#    #+#             */
/*   Updated: 2019/07/24 21:07:59 by migriver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_create_elem(void *data);

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *nl;

	nl = ft_create_elem(data);
	if (*begin_list == (void *)0)
	{
		*begin_list = nl;
		return ;
	}
	nl->next = *begin_list;
	*begin_list = nl;
	return ;
}
