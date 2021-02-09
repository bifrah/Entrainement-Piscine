#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int *tmp;
	
	tmp = a;
	a = b;
	b = tmp;
}

int	main()
{
	int a;
	int b;
	a = 2;
	b = 42;
	ft_swap(&a, &b);
	printf("a = %d\nb = %d\n", a, b);
}
