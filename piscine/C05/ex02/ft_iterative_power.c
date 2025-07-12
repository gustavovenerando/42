/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gveneran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 19:07:27 by gveneran          #+#    #+#             */
/*   Updated: 2025/06/14 19:07:29 by gveneran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	total;

	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	if (power == 1)
		return (nb);
	i = 1;
	total = 1;
	while (i <= power)
	{
		total *= nb;
		i++;
	}
	return (total);
}
/*
int	main(void)
{
	int	res = ft_iterative_power(2,4):
	printf("result: %d\n", res);
	return (0);
}
*/
