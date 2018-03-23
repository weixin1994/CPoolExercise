#include <stdio.h>
int my_strlen(const char *str);
int my_str_islower(char const *str)
{
	int flag = 0;
	if(str != NULL)
	{
		int i = 0;
		if(my_strlen(str) == 0)
			flag = 1;
		while(i < my_strlen(str))
		{
			if(str[i] < 'a' || str[i] > 'z') 
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
