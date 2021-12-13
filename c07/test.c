#include <stdio.h>

int	main(void)
{
	int	i;
	int	*ip;
	long *l;
	char *a;
	char c = 'a';
	char *p = &c;
	printf("Dereferenced pointer to char is size: %lu\n", sizeof(*p));
	printf("Pointer to char is size: %lu\n", sizeof(p));
	printf("Dereferenced uninitialised pointer to char is size: %lu\n", sizeof(*a));
	printf("Dereferenced uninitialised pointer to int is size: %lu\n", sizeof(*ip));
	printf("Dereferenced uninitialised pointer to long is size: %lu\n", sizeof(*l));
	printf("Integer is size: %lu\n", sizeof(i));
}
