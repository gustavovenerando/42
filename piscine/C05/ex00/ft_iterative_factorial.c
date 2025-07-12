/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gveneran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 19:07:05 by gveneran          #+#    #+#             */
/*   Updated: 2025/06/14 19:07:07 by gveneran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_iterative_factorial(int nb)
{
	int	i;
	int	total;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	i = 1;
	total = 1;
	while (i <= nb)
	{
		total *= i;
		i++;
	}
	return (total);
}
/*
int	main(void)
{
	int	res = ft_iterative_factorial(5);
	printf("result: %d\n", res);
	return (0);
}
*/
