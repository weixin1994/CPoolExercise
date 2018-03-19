#include <stdio.h>
#include <string.h>
int my_strncmp(const char *s1, const char *s2, int n)
{
	if(n == 0)
		return 0;
	while(--n && *s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return *s1-*s2;
}

int main()
{
	char *s1 = "qwer";
	char *s2 = "er1234";
	char *s3 = "qer";
	printf("%d\n",strncmp(s1,s2,4));	
	printf("%d\n",strncmp(s1,s3,4));	
	printf("%d\n",my_strncmp(s1,s2,4));	
	printf("%d\n",my_strncmp(s1,s3,4));	
	return 0;
}
