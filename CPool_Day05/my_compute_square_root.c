#include <stdio.h>
int my_compute_square_root(int nb)
{
	int res = 0;
	for(int i = 0;i <= nb;i++)
	{
		if(i * i == nb)
		{
			res = i;
			break;
		}
			
	}
	return res;
}

int main(void)
{
	printf("%d",my_compute_square_root(5));
	printf("%d",my_compute_square_root(9));
	return 0;
}
