#include <stdio.h>
#include <unistd.h>
int my_transform(int num)
{
	if(num >= 10)
	{
		my_transform(num / 10);
		num = num % 10;
	}
	if(num >= 0 && num < 10)
	{
		char res = num + '0';
		write(1,&res,1);
	}
	return 0;
}

int my_put_nbr(int nb)
{
	if(nb >= 0)
		my_transform(nb);
	else
	{
		char minus = '-';
		nb = nb * -1;
		write(1,&minus,1);
		my_transform(nb);
	}
	return 0;
}
