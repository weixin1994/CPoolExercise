#include <stdio.h>
int my_compute_factorial_rec(int nb)
{
	int res = 0;
	if(nb == 0 || nb == 1) 
		res = 1;
	if(nb < 0)
		res = 0;
	if(nb > 1)
		res = nb * my_compute_factorial_rec(nb-1);
    return res;
}

int main(void) 
{ 
	printf("%d",my_compute_factorial_rec(-5));
	return 0;
}
