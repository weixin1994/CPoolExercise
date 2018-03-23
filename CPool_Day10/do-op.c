#include <stdio.h>
#include "./include/my.h"
int do_op(char *num1, char *op, char *num2)
{
	int res;
	if(num1 != NULL && num2 != NULL)
	{
		int n1 = my_getnbr(num1);
		int n2 = my_getnbr(num2);
				
		if(*op != '+' && *op != '-' && *op != '*' && *op != '/' && *op != '%')
			res = 0;
		if(*op == '+')
			res = n1 + n2;
		if(*op == '-')
			res = n1 - n2;
		if(*op == '*')
			res = n1 * n2;
		if(*op == '/')
		{
			if(n2 != 0)
				res = n1 / n2;
			else
				my_putstr("Stop: division by zero\n");	
		}	
		if(*op == '%')
		{
			if(n2 != 0)
				res = n1 % n2;
			else
				my_putstr("Stop: modulo by zero\n");		
		}
	}	
		return res;
}

int main(int argc, char *argv[])
{
	if(argc == 4)
	{
		if(do_op(argv[1],argv[2],argv[3]) != 0)
			printf("%d\n",do_op(argv[1],argv[2],argv[3]));
	}
	return 0;
}
