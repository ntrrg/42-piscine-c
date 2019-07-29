/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migriver <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 15:07:08 by migriver          #+#    #+#             */
/*   Updated: 2019/07/19 15:38:19 by migriver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	rotate_letter(char c, int n);

char	*ft_rot42(char *str)
{
	int i;

	i = -1;
	while (str[++i] != '\0')
		str[i] = rotate_letter(str[i], 42);
	return (str);
}

char	rotate_letter(char c, int n)
{
	return (c + n) % 26 + ('A' - 'a');
}
