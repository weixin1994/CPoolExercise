#include <stdio.h>
#include "./include/my.h"
int show(char const *sentence, char const *alpha, int count);
int language(char const *sentence);
int cal_alpha_count(char const *sentence, char const *alpha)
{
	if(my_strlen(alpha) > 1)
		my_putstr("only can get an alpha!\n");
	else
	{
		if(alpha[0] < 'A' || (alpha[0] > 'Z' && alpha[0] < 'a') || alpha[0] > 'z')
			my_putstr("can not get symbol!\n");
		else
		{
			char alpha_ignorecase;
			int count = 0;
			if(alpha[0] >= 'A' && alpha[0] <= 'Z')
				alpha_ignorecase = alpha[0] + 32;
			else
				alpha_ignorecase = alpha[0] - 32;
			for(int i = 0; sentence[i] != '\0'; i++) 
			{
				if(sentence[i] == alpha[0] || sentence[i] == alpha_ignorecase)
					count++;
			}
			show(sentence, alpha, count);
		}
	}
	return 0;
}

int multiple_alpha(int count, char const **str)
{
	for (int i = 2; i < count; i++)
		cal_alpha_count(str[1], str[i]);
	return 0;
}

int main(int argc, char const *argv[])
{
	multiple_alpha(argc, argv);
	if(language(argv[1]) == '1')
		my_putstr("=> English");
	if(language(argv[1]) == '2')
		my_putstr("=> French");
	if(language(argv[1]) == '3')
		my_putstr("=> German");
	if(language(argv[1]) == '4')
		my_putstr("=> Spanish");
	return 0;
}
