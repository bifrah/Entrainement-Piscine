#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i])
		i++;
	return(i);
}

char	*ft_strncpy(char *dest,  char *src, int n)
{
	int i;

	i = 0;
	while(i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return(dest);
}

char *ft_strdup(char *src)
{
	int n;
	char *nsrc;
	
	n = ft_strlen(src);
	nsrc = malloc((sizeof(char) * n) + 1);
	ft_strncpy(nsrc, src, n);
	return(nsrc);
}

int main()
{
	char *test = "Oui !";
	char *p;

	p = strdup(test);
	printf("Ca va ? %s\n", p);
	p = ft_strdup(test);
	printf("Ca va ? %s\n", p);
}
