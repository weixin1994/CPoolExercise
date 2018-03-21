#include <stdio.h>
#include <unistd.h>
int my_strlen(char const *str)
{
	int len=0;
	while((*str++)!='\0')
	len++;
	return len;
}
