#include <stdio.h>
int my_putchar(char c);
void my_print_echelon(int n,int max_space)
{
	char star = '*';
	char space = ' ';
	int hight,top,count,i,j,k;
	hight = n + 3;
	count = hight;
	top = n * n + n - 1;
	for(i = 0;i < hight;i++)
	{
		max_space--;
	for(j = 0;j < max_space;j++)
	{
		my_putchar(space);
	}
	for(k = 0;k < top;k++)
	{
		my_putchar(star);
	}
	top = top + 2;
	my_putchar('\n');
	}
}
void tree(int size)
{
	int i;
	int j;
	int k;
	int ini = 4 ;
	char star = '*';
	char space = ' ';
	int top;
	int bot;
	int space_count;
	int n = 1;
	top = n * n + n - 1;
	bot = size * size + size * 3 + 3;
	space_count = bot/2;
	for(i = 1;i <= ini;i++)
	{
		for(j = 0;j < space_count;j++)
			my_putchar(space);
		for(k = 0;k < 2 * i - 1;k++)
			my_putchar(star);
		my_putchar('\n');
			space_count--;
	}
	for(int i = 2;i <= size;i++)
		my_print_echelon(i,bot/2);
	printf("%d",size);
}	
int main(void)
{
	tree(3);
	return 0;
}
