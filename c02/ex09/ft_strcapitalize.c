#include <stdio.h>
#include <string.h>

int	ft_is_lowercase(char c)
{
	if(c > 96 && c < 123)
		return(1);
	return(0);
}

int	ft_is_uppercase(char c)
{
	if(c > 64 && c < 91)
		return(1);
	return(0);
}

int	ft_is_alphanum(char c)
{
	if((c > 47 && c < 58) || (c > 64 && c < 91) || (c > 96 && c < 123))
		return(1);
	return(0);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		if((i == 0 && ft_is_lowercase(str[i]) == 1) || (ft_is_lowercase(str[i]) == 1 && ft_is_alphanum(str[i - 1]) == 0))
		{
			str[i] = str[i] - 32;
		}
		if(i != 0 && ft_is_uppercase(str[i]) == 1 && ft_is_alphanum(str[i - 1]) == 1)
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return(str);
}

int main()
{
	char *str = strdup("cQqAqqA+a     aW");
	printf("-1 : %c\n", str[-1]);
	ft_strcapitalize(str);
	printf("%s", str);
}
