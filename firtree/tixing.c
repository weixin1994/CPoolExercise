#include <stdio.h>
void my_print_echelon(int n)
{
	int hight,top,count,i,j,k;
	hight = n + 3;
	count = hight;
	top = n * n + n - 1;
	for(i = 0;i < hight;i++)
	{
		count--;
	for(j = 0;j < count;j++)
	{
		printf(" ");
	}
	for(k = 0;k < top;k++)
	{
		printf("*");
	}
	top = top + 2;
	printf("\n");
	}
}

int main()
{
	my_print_echelon(2);	
}


