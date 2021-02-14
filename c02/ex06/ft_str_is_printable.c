#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	unsigned int i;

	i = 0;
	while(str[i])
	{
		if(str[i] < 32 || str[i] == 127)
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
	char z[2];
	int c;
	int d;

	z[0] = 31;
	a = ft_str_is_printable("chevaux");
	b = ft_str_is_printable(z);
	c = ft_str_is_printable("     ");
	d = ft_str_is_printable("");
	printf("%d%d%d%d", a, b, c, d);
}
