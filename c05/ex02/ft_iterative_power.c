#include <stdio.h>

int ft_iterative_power(int nb, int power)
{
	int res;
	
	res = 1;
	if(power < 0)
		return(0);

	while(power > 0)
	{	
		res = nb * res;
		power--;
	}
	return(res);
}

int main()
{
	 printf("%d", ft_iterative_power(0,0));
}
