#include <stdio.h>
char *my_strcat(char *dest, char const *src)
{
	char *address = dest;
	while(*dest != '\0')
	dest++;
	while((*dest++ = *src++));
	return address;
}
