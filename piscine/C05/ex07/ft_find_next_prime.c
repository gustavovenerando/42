/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gveneran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 19:47:23 by gveneran          #+#    #+#             */
/*   Updated: 2025/06/14 19:49:18 by gveneran         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}
/*
int     main(void)
{
        int     res = ft_find_next_prime(4);
        printf("result: %d\n", res);
        return (0);
}
*/
