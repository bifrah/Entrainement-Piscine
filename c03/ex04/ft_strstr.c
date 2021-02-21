#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		i++;
	}

	return(i);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;

	while((s1[i] || s2[i]) && i < n)
	{
		if(s1[i] != s2[i])
			return(s1[i] - s2[i]);
		i++;
	}
	return(0);
}

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	
	i = 0;
	j = ft_strlen(to_find);
	while(str[i])
	{	
		if(ft_strncmp(to_find, str + i, j) == 0)
			return(str + i);
		i++;
	}
	return(NULL);
}

int main()
{	
	char *string = ft_strstr("Coucou les amis", "les");

	printf("%s\n", string);
	printf("%s\n", strstr("Coucou les amis", "les"));
}
