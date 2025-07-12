/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gveneran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 21:55:18 by gveneran          #+#    #+#             */
/*   Updated: 2025/06/09 21:58:22 by gveneran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
*/
int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return (count);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	begin_index;

	begin_index = ft_strlen(dest);
	i = 0;
	while (i < nb && src[i])
	{
		dest[begin_index + i] = src[i];
		i++;
	}
	dest[begin_index + i] = '\0';
	return (dest);
}

/*
int     main(void)
{
        char    *str1 = (char *)malloc(10 * sizeof(char));
        strcpy(str1, "aloha");
        char    str2[] = "hehe";
        int    	n = 3;
        char    *res;

        res = ft_strncat(str1, str2, n);

        printf("result: %s\n", res);

        free(str1);

        return (0);
}
*/
