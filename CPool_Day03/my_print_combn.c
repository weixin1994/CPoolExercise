#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int my_print_combn(int n)         
{
	int m = n;
	int o = n;
	char *p;
	p = (char *)malloc(sizeof(m));
	int i = 0;
	int x = 1;
	int y = 0;
	int z = 0;
	while(n > 0)
	{
		x = x * 10;
		n--;
	}
	y = x - 1;
	printf("%d===",y);
	
	while(i <= y)
	{
		while(m > 0)
		{
			z = i % 10;
			p[m] = z + '0';
			i = i / 10;
			m--;
			while(o >= 0)
			{
				if(p[o] > p[o-1])
					write(1,&p[o],1);
				o--;
			}
		}
		i++;
	}
	
		
	
	
	return 0;
}
