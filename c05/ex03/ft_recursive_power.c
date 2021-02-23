#include <stdio.h>

int result;

int ft_recursive_power(int nb, int power)
{
	if(power == 0)
	{
		result = 1;
		return(result);
	}

	result = (nb * ft_recursive_power(nb,power - 1));
		return(result);
}

int main()
{
	printf("%d\n", ft_recursive_power(2,3));
}
