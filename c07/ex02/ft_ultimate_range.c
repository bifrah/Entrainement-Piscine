#include <stdlib.h>
#include <stdio.h>

int ft_ultimate_range(int **range, int min, int max)
{
	unsigned int rg;
	int *tab;
	unsigned int i;
	
	if(min >= max)
		return(0);
	rg = max - min;
	if(!(tab = malloc(sizeof(int) * rg + 1)))
		return(-1);
	i = 0;
	
	while(min <= (max - 1))
	{
		tab[i++] = min++;
	}
	*range = tab;
	return(i);
}

int main()
{
	int min = -10;
	int max = 10;
	int size = 0;
	int *range;
	
	size = ft_ultimate_range(&range, min, max);
	printf("%d", size);
	printf("\n");
}
