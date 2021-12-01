#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	*a ^= *b;
	*b ^= *a;
	*a ^= *b;
}

int	main(void)
{
	int a = 10;
	int b = 20;
	printf("a = %d, b = %d\n", a, b);
	ft_swap(&a, &b);
	printf("a = %d, b = %d\n", a, b);
}
