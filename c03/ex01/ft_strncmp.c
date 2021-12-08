/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jselway <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 12:55:26 by jselway           #+#    #+#             */
/*   Updated: 2021/12/08 18:35:59 by jselway          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (n > 0)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		if (!*s1 || !*s2)
			return (0);
		s1++;
		s2++;
		n--;
	}
	return (0);
}
/*
#include <stdio.h>
#include <strings.h>

int	main(void)
{
	int n = 7;
	char	string1[] = "abcdefcsdfg";
	char	string2[] = "abcdef";
	char	string3[] = "abcdefz";
	
	printf("%d\n", ft_strncmp(string1, string2, n));
	printf("%d\n", ft_strncmp(string1, string3, n));
	printf("%d\n", strncmp(string1, string2, n));
	printf("%d\n", strncmp(string1, string3, n));
}
*/
