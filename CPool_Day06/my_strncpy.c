#include <stdio.h>
char *my_strncpy(char *dest, char const *src, int n)
{
	if(dest == NULL && src == NULL)
		return NULL;
	if(src == dest)
		return dest;
	int i = 0;
	char *temp = dest;
	while(i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return temp;
}

int main()
{
	char *s1 = "hello";
	char s2[5] = {};
	printf("%s",my_strncpy(s2,s1,4));	
}
