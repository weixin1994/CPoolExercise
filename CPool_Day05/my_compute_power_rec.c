#include <stdio.h>
int my_compute_power_rec(int nb,int p)
{
	int res = 1;
	if(p == 0)
		res = 1;
	if(p < 0)
		res = 0;
	if(p > 0)
		res = nb * my_compute_power_rec(nb,p-1);
	return res;
}

int main()
{
	printf("%d",my_compute_power_rec(2,5));	
	printf("%d",my_compute_power_rec(-2,0));	
	printf("%d",my_compute_power_rec(-2,-5));	
	return 0;
}
