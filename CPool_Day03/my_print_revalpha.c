#include <stdio.h>
#include <unistd.h>
int my_print_revalpha(void)
{
	char z = 'z';
	while(z >= 'a')
	{
		write(1,&z,1);
		z--;
	}	
	return 0;
}
