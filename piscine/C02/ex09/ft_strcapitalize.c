/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gveneran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 19:35:04 by gveneran          #+#    #+#             */
/*   Updated: 2025/06/08 16:50:17 by gveneran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/
int	ft_is_alphanumeric(char c)
{
	if (!((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
			|| (c >= '0' && c <= '9')))
	{
		return (0);
	}
	return (1);
}

int	ft_is_lowercase(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}

void	ft_to_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	is_new_word;
	int	is_alphanumeric;
	int	is_lowercase;

	ft_to_lowercase(str);
	i = 0;
	is_new_word = 1;
	while (str[i])
	{
		is_alphanumeric = ft_is_alphanumeric(str[i]);
		is_lowercase = ft_is_lowercase(str[i]);
		if (is_lowercase && is_new_word)
			str[i] = str[i] - 32;
		if (is_alphanumeric)
			is_new_word = 0;
		else
			is_new_word = 1;
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str[] = "aloha 42HeHe TeSte o-que; trinta-e-dois";
	char	*res = ft_strcapitalize(str);
	printf("resultado: %s\n", res);

	return (0);
}
*/
