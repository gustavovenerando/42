/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gveneran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 20:59:42 by gveneran          #+#    #+#             */
/*   Updated: 2025/06/18 21:00:32 by gveneran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>
int	ft_total_len(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	count;

	if (size == 0)
		return (1);
	i = 0;
	count = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			j++;
			count++;
		}
		i++;
	}
	i = 0;
	while (sep[i])
	{
		count++;
		i++;
	}
	return (count - size);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		i;
	int		j;
	int		k;

	result = malloc(sizeof(char) * ft_total_len(size, strs, sep));
	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			result[k++] = strs[i][j++];
		j = 0;
		while (sep[j] && i < size - 1)
			result[k++] = sep[j++];
		i++;
	}
	result[k] = '\0';
	return (result);
}
/*
int	main(void)
{
	char	*x[] = {"Aloha", "hehe"};
	char	*y = "SEP";

	char	*res = ft_strjoin(2, x, y);
	printf("result: %s\n", res);

	return (0);
}
*/
