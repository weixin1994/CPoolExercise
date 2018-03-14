#include <stdio.h>
#include "my_str.h"
int my_strcmp(const char *s1,const char *s2)
{
	while(*s1 && *s2 &&(*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return *s1-*s2;
}

char *my_evil_str(char *str)
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
int my_getnbr(char const *str)
{
	int len = my_strlen(str);
	int i = 0;
	int j = 0;
	int count_plus = 0;
	int count_minus = 0;
	int count_num = 0;
	int flag_isnum = 0;
	while(i < len)
	{
		if(str[i] >= 'a' && str[i] <= 'z')
			break;
		if(str[i] == '+')
			count_plus++;
		if(str[i] == '-')
			count_minus++;
		if(str[i] >= '0' && str[i] <= '9')
		{
			count_num++;
			if(str[i+1] < '0' || str[i+1] > '9')
				flag_isnum = 1;
		}
		
		i++;
		if(flag_isnum == 1)
			break;
	}
	//printf("%d,%d,%d,%d",count_plus,count_minus,count_num,i);
	char array[count_num-1];
	int count = 0;
	count = count_num - 1;
	int k = count;
	while(j <= i)
	{
		if(str[j] >= '0' && str[j] <= '9')
		{
			array[count] = str[j];
			count--;
		}
		j++;
	}
	array[count_num] = '\0'; 
	//printf("%s",array);
	char *array2 = my_evil_str(array);
	printf("%s",array2);
		
	int s = 0;
	int m = 1;
	int x = 0;
	i = 0;
	int flag_bey = 0;
	char *max = "2147483647";
	char *max_minus = "2147483648";
	
	if(my_strlen(array2) > 10)
		s = 0;
	if(my_strlen(array2) == 10)
	{
		if(count_minus % 2 == 1)
		{	
			flag_bey = my_strcmp(array2,max_minus);	
		}
		if(count_minus % 2 == 0)
		{
			flag_bey = my_strcmp(array2,max);
		}
	}
	if(flag_bey > 0)
		s = 0;
	if(my_strlen(array2) < 10)
	{
		while(i <= k)
		{	
			x = array2[k] - '0';
			s = s + x * m;
			m = m * 10;
			k--;
		}
		if(count_minus % 2 == 1)
			s = s * -1;
	}
	printf("flag_bey=%d",flag_bey);
	printf("s=%d",s);
	return s;
}

int main()
{
	char *str = "+++------+--44432323232323343345++3+--";
	//char *str = "-a++42";
	my_getnbr(str);
	return 0;
}
