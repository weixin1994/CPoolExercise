#include <stdio.h>
int my_strlen(const char *s)
{
	int len=0;
	while((*s++)!='\0')
	len++;
	return len;
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

int my_compute_power_it(int nb,int p)
{	
	int res = 1;
	if(p == 0)
		res = 1;
	if(p < 0)
		res = 0;
	while(p > 0)
	{
		res = res * nb;
		p--;
	}	
	return res;
}

int	my_getnbr_base(char *str, char *base)
{
	int a = 0;
	int b = 0;
	int count_num = 0;
	int count = 0;
	int len = my_strlen(str);
	while(a < len)
	{
		if(str[a] >= '0' && str[a] <= '9')
			count_num++;	
		a++;	
	}
	char array[count_num-1];
	count = count_num - 1;
	while(b <= a)
	{
		if(str[b] >= '0' && str[b] <= '9')
		{
			array[count] = str[b];
			count--;
		}
		b++;
	}
	array[count_num] = '\0'; 
	char *digit_str = my_evil_str(array);
	int	i,j,result;
	i = my_strlen(digit_str) - 1;
	result = 0;
	j = 0;	
	while(i >= 0)
    {
		result = result + my_compute_power_it(my_strlen(base), j) * (digit_str[i] - '0') ;
		j++;
		i--;	
    }  
    int minus_count = 0;
    int k = 0;
    while(k <= my_strlen(str))
    {
		if(str[k] == '-')
			minus_count++;
		k++;
	}
	if(minus_count % 2 != 0)
		result = result * -1;
    return result;
}

int main()
{
	printf("%d",my_getnbr_base("---++-+-10","0123456789ABCDEF"));
	return 0;
}
