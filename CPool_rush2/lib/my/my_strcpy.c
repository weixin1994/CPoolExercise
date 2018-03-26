#include <stdio.h>
char *my_strcpy(char *dest, char const *src)
{
	if(dest == NULL && src == NULL)
		return NULL;
	if(src == dest)
		return dest;
	char *temp = dest;
	while((*dest++ = *src++));
	return temp;
}
