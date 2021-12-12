#include <stdio.h>

int	main(void)
{
	char c = 'a';
	char *p = &c;
	printf("%lu\n", sizeof(p));
	printf("%lu\n", sizeof(*p));
}
