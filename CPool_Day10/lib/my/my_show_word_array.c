#include <stdio.h>
void my_putchar(char c);
int my_putstr(char const *str);

int my_show_word_array(char * const *tab)
{
	while (*tab != '\0') 
	{
		my_putstr(tab[0]);
		my_putchar('\n');
		tab++;
	}
	return 0;
}
