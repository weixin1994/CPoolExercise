#include <unistd.h>
#include <stdio.h>

int my_putchar(char c)
{
	return write(1,&c,1);
}
void print_row(int col)
{
	int i = 0;
	my_putchar('B');
	while(i < col - 2)
	{
		my_putchar(' ');
		i++;
	}
	my_putchar('B');
	my_putchar('\n');
}
void print_end_border(int col)
{
	int i = 0;
	if(col < 2)
		my_putchar('B');
	if(col >= 2)
	{
		my_putchar('A');
		while(i < col - 2)
		{
			my_putchar('B');
			i++;
		}
		my_putchar('C');
		my_putchar('\n');
	}
}

void print_first_border(int col)
{
	int i = 0;
	if(col < 2)
		my_putchar('B');
	if(col >= 2)
	{
		my_putchar('A');
		while(i < col - 2)
		{
			my_putchar('B');
			i++;
		}
		my_putchar('C');
		my_putchar('\n');
	}
}
void print_single_col(int row)
{
	int i = 0;
	my_putchar('B');
	my_putchar('\n');
	while(i < row - 2){
		my_putchar('B');
		my_putchar('\n');
		i++;
	}
	my_putchar('B');
	my_putchar('\n');
}
void print_single_row(int col)
{
	int i = 0;
	my_putchar('B');
	while(i < col){
		my_putchar('B');
		i++;
	}
	my_putchar('B');
	my_putchar('\n');
}
void colle02(int col,int row)
{
	int i = 0;
	if(col > 1 && row > 1)
	{
		print_first_border(col);
		while(i < row - 2)
		{
			print_row(col);
			i++;
		}
		print_end_border(col);
	}
	else
	{
		if(row == 1 && col != 1)
			print_single_row(col);
		if(col == 1 && row != 1)
			print_single_col(row);
		if(row == 1 && col == 1)
			{
				my_putchar('B');
				my_putchar('\n');
			}
	}
}
int main()
{
	colle02(3,4);
	colle02(5,1);
	colle02(1,5);
	colle02(1,1);
	return 0;
}
