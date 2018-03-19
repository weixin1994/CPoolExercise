#include <stdio.h>
int my_strlen(const char *s)
{
	int len=0;
	while((*s++)!='\0')
	len++;
	return len;
}

char *my_strupcase(char *str)
{
	if(str != NULL)
	{
		int i = 0;
		while(i < my_strlen(str))
		{
			if(str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
			i++;	
		}
		return str;
	}
	else
		return NULL;
}


int main()
{
	//char *s = NULL;
	char s[] = "12,.3aaB5656BBAbc";
	printf("%s",my_strupcase(s));		
	return 0;
}
