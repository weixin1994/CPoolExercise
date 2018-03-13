#include <stdio.h>
#include <unistd.h>
int my_print_comb2(void)
{
	int m = 0;
	int n = 0;
	char a = '0';
	char b = '0';
	char c = '0';
	char d = '0';
	char div = ' ';
	char div2 = ',';
	while(m <= 99)
	{
		while(n <= 99)
		{
			if(m < n)
			{
				a = m / 10 + '0';
				b = m % 10 + '0';
				c = n / 10 + '0';
				d = n % 10 + '0';
				write(1,&a,1);
				write(1,&b,1);
				write(1,&div,1);
				write(1,&c,1);
				write(1,&d,1);
				if(m != 98)
					write(1,&div2,1);			
			}	
			n++;
		}
		n = m;
		m++;
	}
	return 0;
}
