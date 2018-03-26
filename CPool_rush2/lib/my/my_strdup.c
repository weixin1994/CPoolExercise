#include <stdio.h>
#include <stdlib.h>
int my_strlen(char const *str);

char *my_strdup(char const *src)
{
	int i = 0;
	char *dest = malloc(my_strlen(src) + 1);
	while (src[i] != '\0') 
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return dest;
}
