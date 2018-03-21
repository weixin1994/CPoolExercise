#include <stdio.h>
char *my_strncat(char *dest, char const *src, int nb)
{
	int i = 0;
	int j = 0;
	while (dest[i] != '\0') 
		i++;
	while (j < nb) 
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return dest;
}
