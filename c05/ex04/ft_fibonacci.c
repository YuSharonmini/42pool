/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjin <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 14:08:18 by yjin              #+#    #+#             */
/*   Updated: 2021/07/11 14:09:34 by yjin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index == 1)
		return (index + (index - 1));
	else if (index < 0)
		return (-1);
	else
		return (index + ft_fibonacci(index - 1));
}
/*
#include <stdio.h>

int main (void)
{
	printf("%d\n", ft_fibonacci(4));
	return (0);
}*/
