#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int i;
	i = 0;
	while(str[i])
	{
		if(str[i] < 48 || str[i] > 57)
		{
			return(0);
		}
		i++;
	}
	return(1);
}

int main()
{
	int a;
	int b;
	int c;

	a = ft_str_is_numeric("2 cHevaux");
	b = ft_str_is_numeric("123354778990");
	c = ft_str_is_numeric("Che[val");
	printf("%d%d%d", a, b, c);
}
