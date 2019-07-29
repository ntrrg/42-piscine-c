/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migriver <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/26 14:10:22 by migriver          #+#    #+#             */
/*   Updated: 2019/07/26 14:54:58 by migriver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

t_btree	*btree_create_node(void *item)
{
	t_btree *nbt;

	nbt = (t_btree *)malloc(sizeof(t_btree *));
	nbt->left = (void *)0;
	nbt->right = (void *)0;
	nbt->item = item;
	return (nbt);
}
