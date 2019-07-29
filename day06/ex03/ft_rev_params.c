/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migriver <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 16:25:40 by migriver          #+#    #+#             */
/*   Updated: 2019/07/17 21:47:35 by migriver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int		i;
	char	*str;

	while (--argc > 0)
	{
		str = argv[argc];
		i = -1;
		while (str[++i] != '\0')
			ft_putchar(str[i]);
		ft_putchar('\n');
	}
	return (0);
}
