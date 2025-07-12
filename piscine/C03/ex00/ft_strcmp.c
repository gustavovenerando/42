/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gveneran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 21:39:08 by gveneran          #+#    #+#             */
/*   Updated: 2025/06/09 22:34:35 by gveneran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <string.h>
*/
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
int	main(void)
{
	char	str1[] = "aloha";
	char	str2[] = "aloha";
	int	res;
	int	res_orig;

	res_orig = strcmp(str1, str2);
	res = ft_strcmp(str1, str2);

	printf("original result: %d\n", res_orig);
	printf("ft result: %d\n", res);

	return (0);
}
*/
