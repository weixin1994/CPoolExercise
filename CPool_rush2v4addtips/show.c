#include <stdio.h>
#include "./include/my.h"
int cal_frequency(char const *sentence, int count)
{
	int alpha = 0;
	int frequency = 0;
	int point_left = 0;
	int point_rignt = 0;
	
	for(int i = 0; sentence[i] != '\0'; i++) 
	{
		if((sentence[i] >= 'A' && sentence[i] <= 'Z') || (sentence[i] >= 'a' && sentence[i] <= 'z'))
			alpha++;
	}
	count = count * 10000;
	alpha = alpha * 100;
	frequency = (count * 100) / alpha;
	point_rignt = frequency % 100;
	point_left = frequency / 100;
	my_put_nbr(point_left);
	my_putchar('.');
	my_put_nbr(point_rignt);
	return 0;
}

int show(char const *sentence, char const *alpha, int count)
{
	my_putstr(alpha);
	my_putchar(':');
	my_put_nbr(count);
	my_putstr(" (");
	cal_frequency(sentence, count);
	my_putstr("%)");
	my_putchar('\n');
	return 0;
}
