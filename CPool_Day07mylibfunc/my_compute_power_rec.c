#include <stdio.h>
int my_compute_power_rec(int nb, int power)
{
	int res = 1;
	if(p == 0)
		res = 1;
	if(p < 0)
		res = 0;
	if(p > 0)
		res = nb * my_compute_power_rec(nb,power-1);
	return res;
}
