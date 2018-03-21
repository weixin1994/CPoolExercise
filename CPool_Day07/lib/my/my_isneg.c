#include <stdio.h>
#include <unistd.h>
int my_isneg(int nb)
{
	char neg = 'N';
	char pos = 'P';
	if(nb >= 0)
		write(1,&pos,1);
	else
		write(1,&neg,1);
	return 0;
}
