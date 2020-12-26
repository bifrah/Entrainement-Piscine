#include <unistd.h>

void ft_print_numbers(void)
{
	char letter = '0';
	while(letter != 58)
	{
		write(1, &letter, 1);
		letter = letter +1;
	}
}

int main()
{
	ft_print_numbers();
}
