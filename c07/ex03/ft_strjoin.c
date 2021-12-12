/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jselway <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 20:53:35 by jselway           #+#    #+#             */
/*   Updated: 2021/12/12 21:48:19 by jselway          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>


#include <stdlib.h>

int	calc_size(int size, char **strs, char *sep)
{
	int	sep_size;
	int	total_size;
	int	i;

	sep_size = 0;
	while(sep[sep_size])
		sep_size++;
	total_size = 1;
	if (size > 1)
		total_size += (size - 1) * sep_size;
	while (size > 0)
	{
		i = 0;
		while (strs[size - 1][i])
			i++;
		total_size += i;
		size--;
	}
	printf("Returning size: %d\n", total_size);
	return (total_size);
}

char	*add_string(char *src, char *dst)
{
	int i;

	i = -1;
	while(src[i++])
		dst[i] = src[i];
	return (&dst[i]);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	c;
	char	*str;
	char	*p;

	if (size == 0)
	{
		str = malloc(sizeof(c));
		*str = '\0';
		return (str);
	}
	str = (char *)malloc(sizeof(c) * calc_size(size, strs, sep));
	i = 0;
	printf("Adding first string \"%s\" at %p to %p\n", strs[i], strs[i], str);
	p = add_string(strs[0], str);
	while (++i < size)
	{

		printf("The big string is: %s\n", str);
		printf("Adding seperator at %p to %p\n", sep, p);
		p = add_string(sep, p);
		printf("Adding string \"%s\" at %p to %p\n", strs[i], strs[i], p);
		p = add_string(strs[i], p);
	}

	printf("The final big string is: %s\n", str);
	*(++p) = '\0';
	printf("The final terminated big string is: %s\n", str);
	return (str);
}		

#include <stdio.h>

int	main(void)
{
	char str1[] = "1234567890";
	char str2[] = "asdfghjkl;";
	char str3[] = "0987654321";
	char sep[] = "--";

	char *strs[3] = { str1, str2, str3 };
	char *bigstring = ft_strjoin(3, strs, sep);
	printf("String 1 is: %s\n", str1);
	printf("String 2 is: %s\n", str2);
	printf("String 3 is: %s\n", str3);
	printf("The big string is: %s\n", bigstring);
}
