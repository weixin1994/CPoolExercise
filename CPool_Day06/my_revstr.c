#include <stdio.h>
int my_strlen(const char *s)
{
	int len=0;
	while((*s++)!='\0')
	len++;
	return len;
}

char *my_revstr(char *str)
{	
	char temp;
	int i = 0;
	int len = my_strlen(str);
	while(i < len/2)
	{
		temp = str[i];
		str[i] = str[len - 1 - i];
		str[len - 1 - i] = temp;
		i++;
	}
	return str;
}

int main()
{
	char str[] = "qwe123asd";
	printf("%s",my_revstr(str));
}
