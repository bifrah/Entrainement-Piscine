#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int i;
	i = 0;
	while(str[i])
	{
		if(str[i] < 65 || (str[i] > 90 && str[i] < 97) || str[i] > 122)
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

	a = ft_str_is_alpha("2 cHevaux");
	b = ft_str_is_alpha("CheVal");
	c = ft_str_is_alpha("Che[val");
	printf("%d%d%d", a, b, c);
}
