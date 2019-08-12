/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/02 11:35:07 by exam              #+#    #+#             */
/*   Updated: 2019/08/02 11:49:50 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	while (begin_list != (void *)0)
	{
		(*f)(begin_list->data);
		begin_list = begin_list->next;
	}
	return ;
}
