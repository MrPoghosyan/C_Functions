#include <stdio.h>

int 	ft _recursive_power(int nb, int power)
{
	int tiv;

	tiv = 1;
	if(nb == 0 && power == 0)
		return (1);
	if(power == 0 && nb != 0)
		return (0);
	
}

int	main(void) {
	int nb;
	int power;

	scanf("%d%d", &nb, &power);
	printf("%d\n", ft_recursive_power(nb, power);
	return 0;
}
