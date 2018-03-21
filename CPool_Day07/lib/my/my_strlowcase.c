#include <stdio.h>
int my_strlen(const char *str);
char *my_strlowcase(char *str)
{
	if(str != NULL)
	{
		int i = 0;
		while(i < my_strlen(str))
		{
			if(str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i] + 32;
			i++;	
		}
		return str;
	}
	else
		return NULL;
}
