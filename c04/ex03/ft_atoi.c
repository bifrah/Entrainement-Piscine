#include <stdio.h>
#include <stdlib.h>

int ft_is_space(char c)
{
	if(c == ' ' ||c == '\f' || c == '\n' || c == '\r' || c == '\t' || c == '\v' || c == '-' || c == '+')
		return(1);
	return(0);
}

int ft_is_numeric(char c)
{
	if(c < 48 || c > 57)
		return(0);
	return(1);
}

int ft_is_negative(char *str)
{
	int i;
	int n;

	i = 0;
	n = 0;
	while(ft_is_numeric(str[i]) == 0)
	{
		if(str[i] == '-')
			n++;
		i++;
	}
	if((n %= 2) == 0)
		return(1);
	return(-1);
}

int	ft_atoi(char *str)
{
	int i;
	int result;

	i = 0;
	result = 0;

	while(ft_is_space(str[i]) == 1)
		i++;
	while(ft_is_numeric(str[i]) == 1)
	{
		result *= 10;
		result += str[i] - 48;
		i++;
	}
	if(ft_is_negative(str) == -1)
		result *= -1;
	return(result);
}

int main()
{
	char *str;

	str = "   --124a68";
	printf("%d\n", atoi(str));
	printf("%d\n", ft_atoi(str));
}
