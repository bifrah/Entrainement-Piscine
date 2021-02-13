#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int i;
	i = 0;
	while(str[i])
	{
		if(str[i] < 65 || str[i] > 90)
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

	a = ft_str_is_uppercase("2 cHevaux");
	b = ft_str_is_uppercase("CHEVAL");
	c = ft_str_is_uppercase("CHEval");
	printf("%d%d%d", a, b, c);
}
