/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjin <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 09:31:35 by yjin              #+#    #+#             */
/*   Updated: 2021/07/08 12:10:03 by yjin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	total;

	i = 0;
	j = 0;
	total = 0;
	while (dest[i])
		i++;
	while (src[j])
		j++;
	if (i > size)
		total = size + j;
	if (i <= size)
		total = i + j;
	j = 0;
	while (src[j] && i + 1 < size)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (total);
}	
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char a[]= "1234";
	char b[]= "123";

	printf("%u\n", ft_strlcat(a,b,1));
	printf("%lu\n", strlcat(a,b,1));
	return 0;
}*/
