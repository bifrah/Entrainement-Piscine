#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int *ft_range(int min, int max)
{
	unsigned int range;
	int *tab;
	unsigned int i;
	
	if(min >= max)
		return(NULL);
	range = max - min;
	if(!(tab = malloc(sizeof(int) * range + 1)))
		return(NULL);
	i = 0;
	
	while(min <= (max - 1))
	{
		tab[i++] = min++;
	}
	return(tab);
}

int main()
{
	int min = -1500000000;
	int max = 1500000000;
	int *tab;
	
	tab = ft_range(min, max);
	
	int i = 0;
	
	while(i < (max - min))
	{
		printf("%d", tab[i]);
		printf("\n");
		i++;
	}
}
