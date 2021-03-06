#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	ft_is_space(char c)
{
	if (c == '\f' || c == '\n' || c == '\r' || c == '\t'
			|| c == '\v' || c == ' ')
		return (1);
	return (-1);
}

int	ft_is_numeric(int c)
{
	if (c > 47 && c < 58)
		return (1);
	return (-1);
}

int	ft_is_score(char c)
{
	if (c == '+' || c == '-')
		return (1);
	return (-1);
}

int	ft_count(char *str)
{
	int i;
	int compteur;

	i = 0;
	compteur = 0;
	while (ft_is_numeric(str[i]) == -1)
	{
		if (str[i] == '-')
		{
			compteur++;
		}
		i++;
	}
	return (compteur);
}

int	ft_atoi(char *str)
{
	int i;
	int result;

	i = 0;
	result = 0;
	while (ft_is_space(str[i]) == 1)
		i++;
	while (ft_is_score(str[i]) == 1)
		i++;
	while (ft_is_numeric(str[i]) == 1)
	{
		result *= 10;
		result += str[i] - 48;
		i++;
	}
	if (ft_count(str) % 2 != 0)
		result *= -1;
	return (result);
}

int	main(int argc, char **argv)
{
	(void)argc;
	printf("%d\n", ft_atoi(argv[1]));
	printf("%d", atoi(argv[1]));
}
