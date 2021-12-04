char	*ft_strcpy(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0'; // "copy" the null character that broke the while loop
	return (s1);
}

#include <stdio.h>

int	main(void)
{
	char *origin = "Copythis20charstring";
	char dest[21];
	ft_strcpy(dest, origin);
	printf("Original: %s\n", origin);
	printf("Copy: %s\n", dest);
}
