#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int my_strlen(char const *str);
int my_putstr(char const *str);

char **my_str_to_word_array(char const *str)
{
	
	int i = 0;
	int row = 0;
	int col = 0;
	int flag_islastalpha = 0;
	char **dest;

	dest = malloc(sizeof(char*) * (my_strlen(str) + 1));
	dest[0] = malloc(sizeof(char) * (my_strlen(str) + 1));
	while(str[i] != '\0') 
	{
		if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z') || (str[i] >= '0' && str[i] <= '9')) 
		{
			flag_islastalpha = 1;
			dest[row][col] = str[i];
			col++;
		} 
		else
		{
			if(flag_islastalpha != 0) 
			{
				dest[row + 1] = malloc(sizeof(char) * (my_strlen(str) + 1));
				row++;
				col = 0;
				flag_islastalpha = 0;
			}
		} 		
		i++;
	}
	return dest;
}
