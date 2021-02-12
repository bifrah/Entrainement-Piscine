#include <stdio.h>

void	ft_remplir(int *tab, int size)
{
	int i;

	i = 0;
	while(i < size)
	{
		tab[i] = i;
		i++;
	}
}

void	ft_print_tab(int *tab, int size)
{
	int i;

	i = 0;
	while(i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
}

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int tmp[size];

	i = 0;
	while(i < size)
	{
		tmp[i] = tab[i];
		i++;
	}
	
	//quand tmp = 0 alors tab = 9, quand tmp = 0+1 alors tab = 9-1
	i = 1;
	while(i != size + 1)
	{
		tab[size - i] = tmp[i - 1];
		i++;
	}
}

void	ft_rev_int_tab2(int *tab, int size)
{
	int i;
	int tmp;

	i = 0;
	while(i < size)
	{
		tmp = tab[i];
		tab[i] = tab[size - 1];
		tab[size - 1] = tmp;
		i++;
		size--;
	}
	
}

int main()
{
	int size = 10;
	int tab[size];
	
	ft_remplir(tab, size);
	ft_print_tab(tab, size);
	ft_rev_int_tab2(tab, size);
	printf("\n");
	ft_print_tab(tab, size);
}
