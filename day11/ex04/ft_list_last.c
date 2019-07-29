/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migriver <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 21:39:05 by migriver          #+#    #+#             */
/*   Updated: 2019/07/24 21:49:20 by migriver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	if (begin_list == (void *)0)
		return (begin_list);
	while (begin_list->next != (void *)0)
		begin_list = begin_list->next;
	return (begin_list);
}
