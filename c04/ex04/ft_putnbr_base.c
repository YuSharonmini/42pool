/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjin <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 12:46:10 by yjin              #+#    #+#             */
/*   Updated: 2021/07/09 12:47:46 by yjin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

int	isokbase(char *b)
{
	int	i;
	int	k;

	i = 0;
	while (b[i] != 0)
	{
		if (b[i] == '+' || b[i] == '-')
			return (0);
		k = i;
		while (b[++k] != 0)
			if (b[i] == b[k])
				return (0);
		i++;
	}
	if (i < 2)
		return (0);
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int				aux;
	unsigned int	n;
	unsigned int	lb;

	if (isokbase(base))
	{
		lb = ft_strlen(base);
		if (nbr < 0)
		{
			n = (unsigned int) nbr * -1;
			write(1, "-", 1);
		}
		else
			n = (unsigned int) nbr;
		if (n >= lb)
		{
			ft_putnbr_base(n / lb, base);
			ft_putnbr_base(n % lb, base);
		}
		else
		{
			aux = base[n];
			write(1, &aux, 1);
		}
	}
}
/*

int main(void)
{
	int a = 34;
	char b[] = "01";

	ft_putnbr_base(a,b);
}*/
