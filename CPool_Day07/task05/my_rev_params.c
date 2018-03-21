#include <stdio.h>
int my_putstr(char const *str);
void my_putchar(char c);
int main(int argc, char *argv[])
{
	int i;
	for(i = argc - 1; i >= 0; i--)
	{
		my_putstr(argv[i]);
		my_putchar('\n');
	}
	return 0;	
}
