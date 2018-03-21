#include <stdio.h>
int my_is_prime(int nb)
{
	int res = 0;
	if(nb == 0 || nb == 1)
		res = 0;
	if(nb == 2)
		res = 1;
	else
	{
		for(int i = 2;i < nb;i++)
		{
			if(nb % i == 0)
				break;
			if(i == nb - 1)
				res = 1;
			else
				continue;
		}	
	}
	return res;
}
