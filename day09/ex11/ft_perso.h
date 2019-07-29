/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perso.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migriver <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 16:09:06 by migriver          #+#    #+#             */
/*   Updated: 2019/07/19 16:20:11 by migriver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PERSO_H
# define FT_PERSO_H
# define SAVE_THE_WORLD "Save the world"
# include <string.h>

typedef struct	s_perso
{
	char			*name;
	float			life;
	unsigned int	age;
	char			*profession;
}				t_perso;
#endif
