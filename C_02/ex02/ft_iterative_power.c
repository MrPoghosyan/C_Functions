#include <stdio.h>

int	ft_interative_power(int nb, int power)
{
	int tiv;

	tiv = 1;
	if(power <= 0 && power != 0)
		return (0);
	if(nb != 0 && power == 0)
		return (1);
	if(nb != 0 && power == 1)
		return (nb);
	while(power--)
	{
		tiv *= nb;
	}
	return (tiv);
}

int main(void)
{
	int nb;
	int power;

	scanf("%d%d", &nb, &power);
	printf("%d\n", ft_interative_power(nb, power));
	return (0);
}
