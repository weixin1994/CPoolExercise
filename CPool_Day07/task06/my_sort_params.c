#include <stdio.h>
int my_putstr(char const *str);
int my_strlen(char const *str);
void my_putchar(char c);
char *my_strcpy(char *dest, char const *src);
int my_strcmp(char const *s1, char const *s2);

int main(int argc, char **argv)
{
	char temp[100];
	for(int i = 0;i < argc-1;i++)
	{
		for(int j = 0;j < argc-1-i;j++)
		{
			if(my_strcmp(argv[j],argv[j+1]) > 0)
			{
				my_strcpy(temp,argv[j+1]);
				my_strcpy(argv[j+1],argv[j]);
				my_strcpy(argv[j],temp);
				
				
			/*	temp = tab[j+1];
				tab[j+1] = tab[j];
				tab[j] = temp;*/
			}
		}
	}
	for(int i = argc - 1; i >= 0; i--)
	{
		my_putstr(argv[i]);
		my_putchar('\n');
	}
	return 0;
}

