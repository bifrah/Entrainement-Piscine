#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int tmp1;
	tmp1 = *a / *b;
	*b = *a % *b;
	*a = tmp1;
}

int	main()
{
	int c = 42;
	int d = 8;
	ft_ultimate_div_mod(&c, &d);
	printf("c = %d\nd = %d\n", c, d);
}
