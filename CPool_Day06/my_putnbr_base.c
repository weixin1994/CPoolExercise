#include <stdio.h>
#include <unistd.h>
int my_strlen(const char *s)
{
	int len=0;
	while((*s++)!='\0')
	len++;
	return len;
}

int my_putnbr_base(int nbr, char const *base)
{
	char minus = '-';
	if (nbr < 0) 
	{
		nbr = nbr * -1;
		write(1,&minus,1);
	}
	if (nbr > my_strlen(base) - 1) 
	{
		my_putnbr_base(nbr / my_strlen(base), base);
		my_putnbr_base(nbr % my_strlen(base), base);
	} 
	else
		write(1,&base[nbr % my_strlen(base)],1);
	return 0;
}

int main()
{
	my_putnbr_base(-16, "0123456789ABCDEF");
	return 0;
}
