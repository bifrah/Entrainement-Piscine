#include <stdio.h>

#define ABS(x) if(x < 0){ x *= -1;}

int main()
{
	int y;
	
	y = -2;
	printf("%i", ABS(y));
}
