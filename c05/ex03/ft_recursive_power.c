/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjin <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 13:56:21 by yjin              #+#    #+#             */
/*   Updated: 2021/07/11 14:06:40 by yjin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power == 2)
		return (nb * nb);
	else if (power == 0)
		return (1);
	else
		return (nb * ft_recursive_power(nb, power - 1));
	return (0);
}
/*
#include <stdio.h>

int main(void)
{
	printf("%d\n", ft_recursive_power(24,5));
	return (0);
}*/
