/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migriver <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 23:15:17 by migriver          #+#    #+#             */
/*   Updated: 2019/07/16 23:38:25 by migriver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_is_alpha(char c);
int	ft_char_is_digit(char c);
int	ft_char_is_lower_letter(char c);
int	ft_char_is_upper_letter(char c);

int	ft_str_is_alpha(char *str)
{
	int i;

	i = -1;
	while (str[++i] != '\0')
		if (ft_char_is_alpha(str[i]) == 0)
			return (0);
	return (1);
}

int	ft_char_is_alpha(char c)
{
	int result;

	result = 0;
	result += ft_char_is_lower_letter(c);
	result += ft_char_is_upper_letter(c);
	result += ft_char_is_digit(c);
	if (result > 0)
		return (1);
	return (0);
}

int	ft_char_is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_char_is_lower_letter(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int	ft_char_is_upper_letter(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
