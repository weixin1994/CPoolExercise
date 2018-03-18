#include <stdio.h>
#include <unistd.h>
void colle(int lie,int hang)
{	
	int i,j;
	char slash = '/';
	char star = '*';
	char rev_slash = '\\';
	char space = ' ';
	char ret = '\n';

	if(hang == 1 && lie == 1)
	{
		write(1,&star,1);
		write(1,&ret,1);
	}
		
	if(hang != 1 && lie != 1)
	{
		for(i = 1;i <= hang;i++)
		{
			for(j = 1;j <= lie;j++)
			{					
				if(i == 1 && j == 1)
				{
					write(1,&slash,1);
					continue;
				}
					
				if(i == hang && j == lie)
				{
					write(1,&slash,1);
					continue;
				}
					
				if(i == hang && j == 1)
				{
					write(1,&rev_slash,1);
					continue;
				}
					
				if(i == 1 && j == lie)
				{
					write(1,&rev_slash,1);
					continue;
				}
				
				if(i > 1 && i < hang && j > 1 && j < lie )
				{
					write(1,&space,1);
					continue;
				}		
				write(1,&star,1);			
			}
			write(1,&ret,1);
		}
	}
	else
	{
		if(hang == 1 && lie > 1)
		{
			for(int i = 1;i <= lie;i++)
				write(1,&star,1);
			write(1,&ret,1);
		}
		if(lie == 1 && hang > 1)
		{
			for(int i = 1;i <= hang;i++)
			{
				write(1,&star,1);
				write(1,&ret,1);
			}
				
		}
	}
}
int main(void)
{
	colle(4,4);
	return 0;
}
