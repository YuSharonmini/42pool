/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjin <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 12:41:33 by yjin              #+#    #+#             */
/*   Updated: 2021/07/11 12:42:42 by yjin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	j;

	i = 1;
	j = nb;
	if (nb > 0)
	{
		while (i < j)
		{
			nb = nb * i;
			i ++;
		}
		return (nb);
	}
	else if (nb == 0)
		return (1);
	return (0);
}
/*
#include <stdio.h>

int main()
{
	int a= 4;
	printf("%d\n", ft_iterative_factorial(a));
	return (0);
}*/
