#include <stdio.h>
int my_strlen(const char *str);
char *my_strlowcase(char *str);
char *my_strcapitalize(char *str)
{
	if(str != NULL)
	{
		char *all_low = my_strlowcase(str);
		int i = 0;
		while(i < my_strlen(all_low))
		{
			if((all_low[i-1] < 'A' || (all_low[i-1] > 'Z' && all_low[i-1] < 'a') || all_low[i-1] > 'z') && (all_low[i-1] < 48 || all_low[i-1] >57))
			{
				if(all_low[i] >= 'a' && all_low[i] <= 'z')
					all_low[i] = all_low[i] - 32;
			}
			i++;	
		}
		return all_low;
	}
	else
		return NULL;
}
