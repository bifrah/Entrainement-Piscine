#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int i;
	i = 0;
	while(str[i])
	{
		if(str[i] < 97 || str[i] > 122)
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

	a = ft_str_is_lowercase("2 cHevaux");
	b = ft_str_is_lowercase("cheval");
	c = ft_str_is_lowercase("chEval");
	printf("%d%d%d", a, b, c);
}
