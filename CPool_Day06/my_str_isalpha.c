#include <stdio.h>
int my_strlen(const char *s)
{
	int len=0;
	while((*s++)!='\0')
	len++;
	return len;
}

int my_str_isalpha(char const *str)
{
	int flag = 0;
	if(str != NULL)
	{
		int i = 0;
		if(my_strlen(str) == 0)
			flag = 1;
		while(i < my_strlen(str))
		{
			if(str[i] < 'A' || (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z') 
			{ 
				flag = 0;
				break;
			}
			else
				flag = 1;
			i++;
		}
	}	
	return flag;
}

int main()
{
	//char *s = NULL;
	char s[] = "wqeqweq=";
	printf("%d",my_str_isalpha(s));		
	return 0;
}
