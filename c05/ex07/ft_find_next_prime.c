int	ft_find_next_prime(int nb)
{
	int	 i;

	i = 2;
	while (i <= nb / 2)
	{
		if (nb % i == 0)
			return (ft_find_next_prime(nb + 1));
		i++;
	}
	if (nb <= 1)
		return (2);
	return (nb);
}
/*
#include <stdio.h>
int main(void)
{
	printf("%d\n", ft_find_next_prime(900));
	return (0);
}*/
