/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migriver <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 15:52:37 by migriver          #+#    #+#             */
/*   Updated: 2019/07/17 21:29:22 by migriver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*str;

	i = 1;
	while (i < argc)
	{
		str = argv[i];
		j = -1;
		while (str[++j] != '\0')
			ft_putchar(str[j]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
