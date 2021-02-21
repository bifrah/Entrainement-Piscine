#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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

int main()
{
        char *dest = (char *)malloc(sizeof(char *) * (11));
        char *src = "ben";
        dest[0] = 'b';
        dest[1] = 'o';
        dest[2] = 'n';
        dest[3] = 'j';
        dest[4] = 'o';
        dest[5] = 'u';
        dest[6] = 'r';
        dest[7] = '\0';
        printf("%s\n", ft_strcat(dest, src));
}
