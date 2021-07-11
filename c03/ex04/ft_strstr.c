/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjin <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 12:27:33 by yjin              #+#    #+#             */
/*   Updated: 2021/07/09 09:23:25 by yjin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	index[3];

	index[0] = 0;
	index[1] = 0;
	index[2] = 0;
	if (!to_find[index[2]])
		return (str);
	while (str[index[0]])
	{
		index[2] = 0;
		index[1] = index[0];
		if (str[index[1]] == to_find[index[2]])
		{
			while (to_find[index[2]] && (str[index[1]] == to_find[index[2]]))
			{
				index[2]++;
				index[1]++;
			}
			if (to_find[index[2]] == '\0')
				return (&str[index[0]]);
		}
		index[0]++;
		index[1]++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char a[]= "hola adios ds";
	char b[]= "asd";

	printf("%s\n",ft_strstr(a,b));
	printf("%s\n",strstr(a,b));
	return 0;
}*/
