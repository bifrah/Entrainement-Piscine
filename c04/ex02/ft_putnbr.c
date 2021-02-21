#include <unistd.h>

void ft_putnbr(int nb)
{
    if (nb < 0)
    {
        write(1, "-", 1);
        nb *= -1;
    }
    if (nb > 9)
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
    else
    {
        nb += '0';
        write(1, &nb, 1);
    }
}
int main()
{
	ft_putnbr(-1022242);
}
