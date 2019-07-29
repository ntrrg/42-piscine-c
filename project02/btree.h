/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migriver <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/28 10:28:13 by migriver          #+#    #+#             */
/*   Updated: 2019/07/28 21:55:15 by migriver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BTREE_H
# define BTREE_H

struct	s_btree
{
	struct s_btree	*parent;
	struct s_btree	*left;
	struct s_btree	*right;
	void			*value;
	int				is_sign;
};

typedef struct s_btree	t_btree;

t_btree	*btree_create_node(void *value);

t_btree	*btree_create_node(void *value)
{
	t_btree *nbt;

	nbt = (t_btree *)malloc(sizeof(t_btree));
	nbt->parent = (void *)0;
	nbt->left = (void *)0;
	nbt->right = (void *)0;
	nbt->value = value;
	nbt->is_sign = 1;
	return (nbt);
}
#endif
