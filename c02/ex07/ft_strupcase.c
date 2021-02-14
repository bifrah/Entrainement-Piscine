#include <stdio.h>

int	ft_is_lowercase(char c)
{
	if(c > 96 && c < 123)
		return(1);
	return (0);
}

char	*ft_strupcase(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		if(ft_is_lowercase(str[i]) == 1)
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return str;
}
