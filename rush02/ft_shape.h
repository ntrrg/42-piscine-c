/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_shape.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migriver <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/28 18:30:52 by migriver          #+#    #+#             */
/*   Updated: 2019/07/28 18:43:04 by migriver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SHAPE_H
# define FT_SHAPE_H

typedef struct s_shape {
	int h;
	int v;
	int x;
	int y;
} t_shape;

t_shape	create_shape(int h, int v, int x, int y)
{
	t_shape s;
	s.h = h;
	s.v = v;
	s.x = x;
	s.y = y;
	return s;
}

void	set_shape(t_shape *s, int h, int v, int x, int y)
{
	s->h = h;
	s->v = v;
	s->x = x;
	s->y = y;
	return ;
}
#endif
