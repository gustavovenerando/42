/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gveneran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 21:18:56 by gveneran          #+#    #+#             */
/*   Updated: 2025/06/05 21:18:58 by gveneran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_nums(char base_i, char base_j, char comp_i, char comp_j)
{
	if (!(base_i == comp_i && base_j == comp_j))
	{
		ft_putchar(base_i);
		ft_putchar(base_j);
		ft_putchar(' ');
		ft_putchar(comp_i);
		ft_putchar(comp_j);
		if (!(base_i == '9' && base_j == '8' && comp_i == '9' && comp_j == '9'))
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	ft_print_comb2(void)
{
	char	arr[4];

	arr[0] = '0';
	while (arr[0] <= '9')
	{
		arr[1] = '0';
		while (arr[1] <= '9')
		{
			arr[2] = arr[0];
			while (arr[2] <= '9')
			{
				arr[3] = arr[1];
				while (arr[3] <= '9')
				{
					ft_print_nums(arr[0], arr[1], arr[2], arr[3]);
					arr[3]++;
				}
				arr[2]++;
			}
			arr[1]++;
		}
		arr[0]++;
	}
}
/*
int	main(void) {
	ft_print_comb2();
	return 0;
}
*/
