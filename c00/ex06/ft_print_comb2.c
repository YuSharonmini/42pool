/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjin <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 18:02:49 by yjin              #+#    #+#             */
/*   Updated: 2021/06/26 08:54:47 by yjin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_format(int x, int y)
{
	if (x == 98 && y == 99)
	{
		ft_putchar(x / 10 + '0');
		ft_putchar(x % 10 + '0');
		ft_putchar(' ');
		ft_putchar(y / 10 + '0');
		ft_putchar(y % 10 + '0');
	}
	else
	{
		ft_putchar(x / 10 + '0');
		ft_putchar(x % 10 + '0');
		ft_putchar(' ');
		ft_putchar(y / 10 + '0');
		ft_putchar(y % 10 + '0');
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = 0;
	while (x < 99)
	{
		y = x + 1;
		while (y < 100)
		{
			ft_format(x, y);
			y++;
		}
		x++;
	}
}
