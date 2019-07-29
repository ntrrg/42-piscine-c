/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migriver <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 15:23:35 by migriver          #+#    #+#             */
/*   Updated: 2019/07/17 21:38:31 by migriver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int		i;
	char	*str;

	i = argc;
	i = -1;
	str = argv[0];
	while (str[++i] != '\0')
		ft_putchar(str[i]);
	ft_putchar('\n');
	return (0);
}
