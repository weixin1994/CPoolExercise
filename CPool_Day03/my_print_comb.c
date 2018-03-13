#include <stdio.h>
#include <unistd.h>
int my_print_comb(void)
{
	int n = 0;
	int i = 0;
	int j = 0;
	int k = 0;
	char div = ',';
	while(n <= 999)
	{
		i = n / 100;
		j = (n - i * 100) / 10;
		k = n % 10;
		if(i != j && j != k && k > j && j > i)
		{
			char a = i + '0';
			char b = j + '0';
			char c = k + '0';
			write(1,&a,1);
			write(1,&b,1);
			write(1,&c,1);
			if(n != 789)
				write(1,&div,1);
		}
		n++;
	}
	return 0;
}

