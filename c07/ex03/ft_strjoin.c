#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
		i++;
	return(i);
}

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = ft_strlen(dest);
	j = 0;
	while(src[j])
		dest[i++] = src[j++];
	dest[i] = '\0';
	return(dest);
}
int	ft_count(int size, char **strs)
{	
	int i;
	int result;

	i = 0;
	result = 0;
	while(i < size)
	{
		result += ft_strlen(strs[i]);
		i++;
	}
	return(result);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
	char *canfree;
	char *total;
	int i;
	int memToAlloc;

	i = 0;
	memToAlloc = ft_count(size, strs) + ft_strlen(sep) * size - 1; 
	canfree = malloc(sizeof(char) + 1);
	canfree[0] = '\0';
	if(size == 0)
		return(canfree);
	if(!(total = malloc(sizeof(char) * memToAlloc + 1)))
		return(NULL);
	while(i < size)
	{
		ft_strcat(total, strs[i]);
		if(i != size - 1)
			ft_strcat(total, sep);
		i++;
	}
	return(total);
}

int main()
{
	int size;
	char *retour;
	char **strs;
	char *sep = "AIME";

	size = 3;
	strs = (char **)malloc(sizeof(char *) * size + 1);
	strs[0] = "benj";
	strs[1] = "aloe";
	strs[2] = "coucou";
	strs[3] = NULL;

	retour = ft_strjoin(size, strs, sep);
	printf("%s", retour);
}
