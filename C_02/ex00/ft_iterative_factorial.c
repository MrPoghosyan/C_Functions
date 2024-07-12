#include <stdio.h>

int ft_iterative_factorial(int nb)
{
	int faktor;

	faktor = 1;
	if(nb < 0)
		return (0);
	if(nb == 0 || nb ==1)
		return (1);
	while(nb > 0)
	{
		faktor *= nb;
		nb--;
	}
	return (faktor);
}

int main(void)
{
	int nbr;

	scanf("%d", &nbr);
	printf("%d\n", ft_iterative_factorial(nbr));
	return (0);
}
