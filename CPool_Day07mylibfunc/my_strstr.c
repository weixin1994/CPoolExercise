#include <stdio.h>
int my_strlen(const char *s);
char *my_strstr(char *str, char const *to_find)
{
	if (!str || !to_find || my_strlen(to_find) > my_strlen(str))
		return NULL;
	for(int i = 0; str[i] != '\0'; i++)
	{
		int temp = i;
		int j = 0;
		while(str[i++] == to_find[j++])
		{
			if(to_find[j] == '\0')
				return &str[temp];
		}
		i = temp;
	}	
	return NULL;
}
