/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gveneran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 20:10:11 by gveneran          #+#    #+#             */
/*   Updated: 2025/06/08 16:58:22 by gveneran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/
unsigned int	ft_strlen(char *str)
{
	unsigned int	count;

	count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return (count);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	src_len;
	unsigned int	i;

	src_len = ft_strlen(src);
	i = 0;
	if (size != 0)
	{
		while (i < (size - 1) && src[i] && dest[i])
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (src_len);
}
/*
int	main(void)
{
	char	src[] = "aloha";
	char	dest[] = "000000";
	unsigned int	size = 3;
	unsigned int	res;

	res = ft_strlcpy(dest, src, size);

	printf("resultado ft: %d - New dest: %s\n", res, dest);
	return (0);
}
*/
