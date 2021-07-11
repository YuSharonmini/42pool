/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjin <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 18:12:56 by yjin              #+#    #+#             */
/*   Updated: 2021/06/28 09:18:21 by yjin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_tab_int(int *tabn, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		ft_putchar(tabn[i] + 48);
		i++;
	}
}

int	ft_increment_nbr(int *tabn, int size)
{
	int	i;
	int	j;

	i = size - 2;
	if (tabn[i + 1] != 9)
	{
		tabn[i + 1]++;
		return (8);
	}
	while (i >= 0)
	{
		if (tabn[i] != 9 && tabn[i] + 1 < tabn[i + 1])
		{
			j = i;
			tabn[i]++;
			while (j < size)
			{
				tabn[j + 1] = tabn[j] + 1;
				j++;
			}
			return (j);
		}
		i--;
	}
	return (-1);
}

void	ft_print_combn(int n)
{
	int	tabn[9];
	int	i;
	int	last;

	tabn[0] = 0;
	i = 1;
	while (i < n)
	{
		tabn[i] = tabn[i - 1] + 1;
		i++;
	}
	i = 0;
	while (1)
	{
		ft_print_tab_int(tabn, n);
		last = ft_increment_nbr(tabn, n);
		if (last != -1 && tabn[0] < 11 - n)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		else
			break ;
	}
}
