/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gveneran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 21:32:00 by gveneran          #+#    #+#             */
/*   Updated: 2025/06/05 21:33:15 by gveneran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int		mod;
	char	digit;

	if (nb == 0)
		return ;
	if (nb < 0)
	{
		nb = -nb;
		ft_putchar('-');
	}
	mod = nb % 10;
	digit = 48 + mod;
	nb = nb / 10;
	ft_putnbr(nb);
	ft_putchar(digit);
}
/*
int	main()
{
	ft_putnbr(-42);
	return 0;
}
*/
