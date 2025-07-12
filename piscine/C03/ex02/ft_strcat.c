/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gveneran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 21:32:29 by gveneran          #+#    #+#             */
/*   Updated: 2025/06/09 21:32:46 by gveneran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
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

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	begin_index;

	begin_index = ft_strlen(dest);
	i = 0;
	while (src[i])
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
        char    *res;

        res = ft_strcat(str1, str2);

        printf("result: %s\n", res);

	free(str1);

        return (0);
}
*/
