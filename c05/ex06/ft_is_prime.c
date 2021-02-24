int result;

int ft_sqrt(int nb)
{
	int racine;
	int sqrt;

	racine = 1;
	sqrt = 0;
	while(racine <= nb / 2)
	{
		sqrt = racine * racine;
		if(sqrt ==nb)
			return(racine);
		racine++;
	}
	return(0);
}

int ft_is_prime(int nb)
{
	int n;
	while(n > 1 && n <= ft_sqrt(nb))
	{
}
