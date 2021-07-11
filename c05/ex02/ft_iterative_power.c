/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjin <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 13:54:11 by yjin              #+#    #+#             */
/*   Updated: 2021/07/11 13:55:14 by yjin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	j;

	i = 1;
	j = nb;
	if (power > 0)
	{
		while (i < power)
		{
			nb = nb * j;
			i++;
		}
		return (nb);
	}
	else if (power == 0)
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>

int main()
{
	printf("%d\n", ft_iterative_power(12,5));
	return (0);
}*/
