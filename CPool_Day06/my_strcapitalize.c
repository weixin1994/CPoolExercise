#include <stdio.h>
int my_strlen(const char *s)
{
	int len=0;
	while((*s++)!='\0')
	len++;
	return len;
}

char *my_tolowcase(char *str)
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

char *my_strcapitalize(char *str)
{
	if(str != NULL)
	{
		char *all_low = my_tolowcase(str);
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

int main()
{
	//char *s = NULL;
	char s[] = "12,.3aaB5   ass Aqwe b ss,as 656aBAbc 42aw 42Aw";
	printf("%s",my_strcapitalize(s));		
	return 0;
}
