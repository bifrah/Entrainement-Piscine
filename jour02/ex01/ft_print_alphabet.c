#include <unistd.h>

void ft_print_alphabet(void)
{
	char letter = 'a';
	while(letter != 123)
	{
		write(1, &letter, 1);
		letter = letter + 1;
	}
}

int main()
{
	ft_print_alphabet();
}
