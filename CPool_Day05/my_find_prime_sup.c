#include <stdio.h>
int my_is_prime(int nb);
int my_find_prime_sup(int nb)
{
	int i = nb;
	while(my_is_prime(i) != 1)
		i++;
	return i;
	
}

int main(void)
{
	printf("%d",my_find_prime_sup(2));
	printf("%d",my_find_prime_sup(0));
	printf("%d",my_find_prime_sup(5));
	printf("%d",my_find_prime_sup(6));
	return 0;
}
