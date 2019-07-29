/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migriver <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/27 17:10:40 by migriver          #+#    #+#             */
/*   Updated: 2019/07/28 22:10:07 by migriver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EVAL_EXPR_H
# define EVAL_EXPR_H
# include <stdio.h>
# include <stdlib.h>
# include "ft_atoi.h"
# include "btree.h"

int	eval_expr(char *str);
void	eval_expr_add_node(t_btree **current, t_btree *node);
t_btree	*eval_expr_create_node(char *str, int from, int to);
int	eval_expr_is_symbol(t_btree *node);
t_btree	*eval_expr_parse(char *str);

int	eval_expr(char *str)
{
	t_btree	*tree;

	tree = eval_expr_parse(str);
	return (*(int *)tree->value);
}

void	eval_expr_add_node(t_btree **current, t_btree *node)
{
	if (*current == (void *)0)
	{
		*current = node;
		*current = node;
	}
	else if (!*current->is_sign)
	{
		*current = 
	}
	return ;
}

t_btree	*eval_expr_create_node(char *str, int from, int to)
{
	t_btree *node;
	char *nstr;
	int val;
	int i;

	nstr = (char *)malloc(sizeof(char) * (to - from + 1));
	i = -1;
	while (from + ++i < to)
		nstr[i] = str[from + i];
	nstr[i] = '\0';
	node = btree_create_node(nstr);
	if (eval_expr_is_symbol(node))
	{
		node->is_sign = 0;
		val = ft_atoi((char *)node->value);
		node->value = &val;
	}
	return (node);
}

int	eval_expr_is_symbol(t_btree *node)
{
	char *str;

	str = (char *)node->value;
	if (str[1] != '\0')
		return (0);
	if (str[0] == '(' || str[0] == ')')
		return (1);
	if (str[0] == '+' || str[0] == '-')
		return (1);
	if (str[0] == '*' || str[0] == '/' || str[0] == '%')
		return (1);
	return (0);
}

t_btree	*eval_expr_parse(char *str)
{
	t_btree *tree;
	int i;
	int j;

	tree = (void *)0;
	i = 0;
	j = 0;
	while (1 == 1)
	{
		while(str[j] != ' ' && str[j] != '(' && str[j] != ')' && str[j] != '\0')
			j++;
		if (str[j] == '(')
			eval_expr_add_node(&tree, eval_expr_create_node(str, i, j + 1));
		else
			eval_expr_add_node(&tree, eval_expr_create_node(str, i, j));
		i = (str[j] == ')') ? j : j + 1;
		if (str[j] == '\0')
			break ;
		j++;
	}
	while (tree->parent != (void *)0)
		tree = tree->parent;
	return (tree);
}
#endif
