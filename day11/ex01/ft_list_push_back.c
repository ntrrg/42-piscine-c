/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migriver <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 18:50:19 by migriver          #+#    #+#             */
/*   Updated: 2019/07/24 20:22:11 by migriver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_create_elem(void *data);

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *nl;

	nl = ft_create_elem(data);
	if (*begin_list == (void *)0)
	{
		*begin_list = nl;
		return ;
	}
	while ((*begin_list)->next != (void *)0)
		begin_list = &((*begin_list)->next);
	(*begin_list)->next = nl;
	return ;
}
