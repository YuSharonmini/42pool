int	ft_is_prime(int nb)
{
	int	 i;

	i = 2;
	while (i <= nb / 2)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	if (nb <= 1)
		return (0);
	return (1);
}
/*
#include <stdio.h>
int main(void)
{
	printf("%d\n", ft_is_prime(985));
	return (0);
}*/
