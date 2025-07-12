/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gveneran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 19:31:37 by gveneran          #+#    #+#             */
/*   Updated: 2025/06/18 19:36:51 by gveneran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>
int	*ft_range(int min, int max, int len)
{
	int	*arr;
	int	i;

	i = 0;
	arr = malloc(sizeof(int) * len);
	while (min < max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int	len;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	len = max - min;
	*range = ft_range(min, max, len);
	return (len);
}
/*
int	main(void)
{
	int	min = 2;
	int	max = 6;
	int	len = max - min;
	int	i = 0;
	int	*arr;

	ft_ultimate_range(&arr, min, max);

	while (i < len)
	{
		printf("%d\n", arr[i]);
		i++;
	}
	return (0);
}
*/
