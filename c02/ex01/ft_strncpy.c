#include <unistd.h>
#include <string.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;
	i = 0;

	while(str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while(src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return(dest);
}

int main()
{
	char dest[25];
	char src[25] = "Les poules méchantes";
	
	ft_strncpy(dest, "", 3);
	ft_putstr(src);
	ft_putstr(dest);
	ft_strncpy(dest,src, 5);
	ft_putstr(src);
	ft_putstr(dest);
}

