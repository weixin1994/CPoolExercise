#include <stdio.h>
#include <unistd.h>
int my_print_digits(void)
{
	char zero = '0';
	while(zero <= '9')
	{
		write(1,&zero,1);
		zero++;
	}	
	return 0;
}

int main()
{
	my_print_digits();
		return 0;
}
