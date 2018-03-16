#include <stdio.h>
int my_putchar(char c);
void my_print_echelon(int n,int max_space)
{
	char star = '*';
	char space = ' ';
	int hight,top,real_space,i,j,k;
	hight = n + 3;
	top = n * n + n - 1;
	real_space = max_space - top/2;
	for(i = 0;i < hight;i++)
	{
		real_space--;
	for(j = 0;j <= real_space;j++)
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
	int i,j,k,bot,space_count,pipe_size;
	int ini = 4 ;
	char star = '*';
	char space = ' ';
	char pipe = '|';
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
	
	pipe_size = size;
	if(size % 2 == 0)
		pipe_size = size + 1;
	for(int i = 0;i < size;i++)
	{
		for(int i = 0;i < bot/2-size/2;i++)
			my_putchar(space);
		for(int j = 0;j < pipe_size;j++)
			my_putchar(pipe);
		my_putchar('\n');
	}
	
}	
int main(void)
{
	tree(6);
	return 0;
}
