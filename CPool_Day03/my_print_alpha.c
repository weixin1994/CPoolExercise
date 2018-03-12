#include <stdio.h>
#include <unistd.h>
int my_print_alpha(void)
{
	char a = 'a';
	while(a <= 'z')
	{
		write(1,&a,1);
		a++;
	}	
	return 0;
}

int main()
{
	my_print_alpha();
		return 0;
}
