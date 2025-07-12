/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gveneran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 11:38:35 by gveneran          #+#    #+#             */
/*   Updated: 2025/05/31 11:58:14 by gveneran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_row(int width, char begin, char middle, char end)
{
	int	column;

	column = 1;
	while (column <= width)
	{
		if (column == 1)
		{
			ft_putchar(begin);
		}
		else if (column == width)
		{
			ft_putchar(end);
		}
		else
		{
			ft_putchar(middle);
		}
		column++;
	}
}

void	rush(int x, int y)
{
	int	row;

	row = 1;
	while (row <= y)
	{
		if (row == 1)
		{
			ft_print_row(x, '/', '*', '\\');
		}
		else if (row == y)
		{
			ft_print_row(x, '\\', '*', '/');
		}
		else
		{
			ft_print_row(x, '*', ' ', '*');
		}
		ft_putchar('\n');
		row++;
	}
}
