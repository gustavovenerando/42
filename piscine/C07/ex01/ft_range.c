/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gveneran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 19:16:09 by gveneran          #+#    #+#             */
/*   Updated: 2025/06/18 19:30:53 by gveneran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	len;
	int	i;

	if (min >= max)
		return (NULL);
	i = 0;
	len = max - min;
	arr = malloc(sizeof(int) * len);
	while (min < max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}
/*
int	main(void)
{
	int	min = 3;
	int	max = 6;
	int	len = max - min;
	int	i = 0;
	int	*arr = ft_range(min, max);

	while (i < len)
	{
		printf("%d\n", arr[i]);
		i++;
	}
}
*/
