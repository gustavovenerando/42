/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gveneran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 21:33:17 by gveneran          #+#    #+#             */
/*   Updated: 2025/06/11 20:10:30 by gveneran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <string.h>
*/
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	if (i == n)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
int	main(void)
{
	char	str1[] = "Hello";
	char	str2[] = "Hellz";
	unsigned int	n = 4;
	int	res;
	int	res_orig;

	res_orig = strncmp(str1, str2, n);
	res = ft_strncmp(str1, str2, n);

	printf("original result: %d\n", res_orig);
	printf("result: %d\n", res);

	return (0);
}
*/
