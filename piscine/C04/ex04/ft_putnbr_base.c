/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gveneran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 16:42:16 by gveneran          #+#    #+#             */
/*   Updated: 2025/06/14 16:59:58 by gveneran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	ft_check_base(char *base)
{
	int	base_len;
	int	i;
	int	j;

	base_len = ft_strlen(base);
	if (!base_len || base_len == 1)
		return (0);
	i = 0;
	while (base[i])
	{
		j = i + 1;
		while (base[j] && j < base_len)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		if (base[i] == '-' || base[i] == '+')
			return (0);
		i++;
	}
	return (1);
}

void	ft_printnbr(int nbr, char *base, int base_len)
{
	long long	n;
	int			digit;

	n = nbr;
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n >= base_len)
		ft_printnbr(n / base_len, base, base_len);
	digit = n % base_len;
	ft_putchar(base[digit]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	is_valid_base;
	int	base_len;

	is_valid_base = ft_check_base(base);
	if (!is_valid_base)
		return ;
	base_len = ft_strlen(base);
	ft_printnbr(nbr, base, base_len);
}
/*
int	main(void)
{
	//ft_putnbr_base(42, "0123456789");
	//ft_putnbr_base(42, "0123456789ABCDEF");
	//ft_putnbr_base(42, "01");
	//ft_putnbr_base(42, "poneyvif");
	return (0);
}
*/
