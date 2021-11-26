#include <unistd.h>

int	main(int argv, char **argv)
{
	write(1, &argv[1], 1);
}
