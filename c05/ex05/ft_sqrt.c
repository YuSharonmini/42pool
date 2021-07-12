int	ft_sqrt(int nb)
{
	int	i;

	if (nb <= 0)
	{
		return (0);
	}
	if (nb == 1)
	{
		return (1);
	}
	i = 0;
	while (i <= nb / 2)
	{
		if (i * i == nb)
		{
			return (i);
		}
		i++;
	}
}
/*
#include <stdio.h>

int main(void)
{
	printf("%d\n", ft_sqrt(25));
	return (0);
}*/
