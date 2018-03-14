#include <stdio.h>
int my_compute_factorial_it(int nb)
{
	int i = 2;
	int res = 1;
	if(nb < 0)
		res = 0;
	while(i <= nb)
	{
		res = res * i;
		i++;
	}
	return res;
}

int main(void) 
{ 
	printf("%d",my_compute_factorial_it(5));
	return 0;
}
