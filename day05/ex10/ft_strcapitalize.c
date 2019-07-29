/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migriver <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 22:08:54 by migriver          #+#    #+#             */
/*   Updated: 2019/07/16 23:31:02 by migriver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_alpha(char c);
int		ft_is_digit(char c);
int		ft_is_lower_letter(char c);
int		ft_is_upper_letter(char c);
char	*ft_strlowcase(char *str);

char	*ft_strcapitalize(char *str)
{
	int i;
	int alpha;

	ft_strlowcase(str);
	i = -1;
	while (str[++i] != '\0')
	{
		alpha = 0;
		alpha += ft_is_lower_letter(c);
		alpha += ft_is_upper_letter(c);
		alpha += ft_is_digit(c);
		if ((i == 0 || alpha == 0) && ft_is_lower_letter(str[i]) == 1)
			str[i] = str[i] - 32;
	}
	return (str);
}

int		ft_is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int		ft_is_lower_letter(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int		ft_is_upper_letter(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

char	*ft_strlowcase(char *str)
{
	int i;

	i = -1;
	while (str[++i] != '\0')
		if (ft_is_upper_letter(str[i]) == 1)
			str[i] = str[i] + 32;
	return (str);
}
