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

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while(src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return(dest);
}

int main()
{
	char dest[50];
	char src[50] = "Les poules méchantes";
	
	ft_strcpy(dest, "Titou");
	ft_putstr(src);
	ft_putstr(dest);
	ft_strcpy(dest,src);
	ft_putstr(src);
	ft_putstr(dest);
}
