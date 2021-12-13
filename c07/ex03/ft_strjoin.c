/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jselway <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 20:53:35 by jselway           #+#    #+#             */
/*   Updated: 2021/12/13 13:47:55 by jselway          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	calc_size(int size, char **strs, char *sep)
{
	int	sep_size;
	int	total_size;
	int	i;

	sep_size = 0;
	while (sep[sep_size])
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
	return (total_size);
}

char	*add_string(char *src, char *dst)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
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
	p = add_string(strs[0], str);
	while (++i < size)
	{
		p = add_string(sep, p);
		p = add_string(strs[i], p);
	}
	*(++p) = '\0';
	return (str);
}		
/*
#include <stdio.h>

int	main(void)
{
	char str1[] = "123890";
	char str2[] = "asdkl;";
	char str3[] = "098321";
	char sep[] = "--";

	char *strs[3] = { str1, str2, str3 };
	char *bigstring = ft_strjoin(3, strs, sep);
	//free(bigstring);
	printf("String 1 is: %s\n", str1);
	printf("String 2 is: %s\n", str2);
	printf("String 3 is: %s\n", str3);
	printf("The big string is: %s\n", bigstring);
}
*/
