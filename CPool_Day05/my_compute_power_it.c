#include <stdio.h>
int my_compute_power_it(int nb,int p)
{	
	int res = 1;
	if(p == 0)
		res = 1;
	if(p < 0)
		res = 0;
	while(p > 0)
	{
		res = res * nb;
		p--;
	}	
	return res;
}

int main()
{
	printf("%d",my_compute_power_it(2,5));	
	printf("%d",my_compute_power_it(-2,0));	
	printf("%d",my_compute_power_it(-2,-5));	
	return 0;
}
