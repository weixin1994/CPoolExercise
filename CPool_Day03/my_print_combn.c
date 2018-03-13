#include <stdio.h>
#include <unistd.h>
#include <math.h>
int my_print_combn(int n)         
{
	int x = 1;
	int y = 0;
	while(n > 0)
	{
		x = x * 10;
		n--;
	}
	y = x - 1;
	//printf("%d",y);
	return 0;
}

int main()
{
	my_print_combn(4);
	return 0;       	
}
