#include <stdio.h>
#include <stdlib.h>
int my_putstr(char const *str);
void my_putchar(char c);
int my_strcmp(char const *s1, char const *s2);
int main(int argc, char *argv[])
{
	int temp;
	int *order = malloc(sizeof(int) * argc);
	for(int i = 0;i <= argc - 1;i++)
		order[i] = i;
	for(int i = 0;i < argc - 1;i++)
	{
		for(int j = 0;j < argc-1-i;j++)
		{
			if(my_strcmp(argv[order[j]],argv[order[j+1]]) > 0)
			{
				temp = order[j+1];
				order[j+1] = order[j];
				order[j] = temp;	
			}
		}
	}
	for(int i = 0; i <= argc - 1;i++)
	{
		my_putstr(argv[order[i]]);
		my_putchar('\n');
	}
	return 0;
}

