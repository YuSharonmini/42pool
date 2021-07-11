/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjin <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 18:14:15 by yjin              #+#    #+#             */
/*   Updated: 2021/07/05 09:58:19 by yjin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>

char    *ft_strcat(char *dest, char *src);
int main(void)
{
	char a[] = "Hola";
	char b[] = "Mundo";

	printf("%s", ft_strcat(a,b));
	return 0;
}*/

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
