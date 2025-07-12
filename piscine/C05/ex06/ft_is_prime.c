/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gveneran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 19:40:53 by gveneran          #+#    #+#             */
/*   Updated: 2025/06/14 19:41:07 by gveneran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_is_prime(int nb)
{
	int	cmp;

	if (nb < 2)
		return (0);
	cmp = 2;
	while (cmp <= nb / 2)
	{
		if (nb % cmp == 0)
			return (0);
		cmp++;
	}
	return (1);
}
/*
int	main(void)
{
	int	res = ft_is_prime(20);
	printf("result: %d\n", res);
	return (0);
}
*/
