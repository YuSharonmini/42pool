/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjin <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 10:53:18 by yjin              #+#    #+#             */
/*   Updated: 2021/07/05 09:58:42 by yjin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>
int	ft_strcmp(char *s1, char *s2);
int main(void)
{
	char a[] = "Hola";
	char b[] = "Hola";
	char c[] = "Holas";
	char d[] = "Hol";

	printf("Son iguales %d\n", ft_strcmp(a,b));
	printf("No son iguales %d\n", ft_strcmp(a,c));
	printf("Tampoco son iguales %d\n", ft_strcmp(a,d));
	return 0;
}
*/
int	ft_strcmp(char *s1, char *s2)
{
	int	count;

	count = 0;
	while (s1[count] != '\0' || s2[count] != '\0')
	{
		if (s1[count] < s2[count])
		{
			return (-1);
		}
		else if (s1[count] > s2[count])
		{
			return (1);
		}
		count++;
	}
	return (0);
}
