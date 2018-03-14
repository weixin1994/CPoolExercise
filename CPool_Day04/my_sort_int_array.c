#include <stdio.h>
#include <stdlib.h>
void my_sort_int_array(int *array,int size)
{
	int temp = 0;
	for(int i = 0;i < size-1;i++)
	{
		for(int j = 0;j < size-1-i;j++)
		{
			if(array[j] > array[j+1])
			{
				temp = array[j+1];
				array[j+1] = array[j];
				array[j] = temp;
			}
		}
	}
}

int main(void)
{
	int k = 0;
	int arra[] = {3,4,1,2,7,5,7,8,5,6};
	int a = sizeof(arra)/sizeof(arra[0]);
	my_sort_int_array(arra,a);
	for(;k < 10;k++)
	{
		printf("%d",arra[k]);
	}
	return 0;
}
