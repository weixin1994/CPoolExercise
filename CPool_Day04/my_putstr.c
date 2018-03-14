#include <stdio.h>
#include <unistd.h>
#include "my_str.h"
int my_putstr(char const *str)
{
	return write(1,str,my_strlen(str));	
}
