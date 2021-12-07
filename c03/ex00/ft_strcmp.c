/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jselway <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 21:55:42 by jselway           #+#    #+#             */
/*   Updated: 2021/12/07 15:41:03 by jselway          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	return (s1[i] - s2[i]);
}

#include <stdio.h>
#include <strings.h>

int	main(void)
{
	char	string1[] = "abcdefg";
	char	string2[] = "abcdefghijklb";
	char	string3[] = "abcdefghijklg";
	printf("%d\n", ft_strcmp(string1, string2));
	printf("%d\n", ft_strcmp(string1, string3));
	printf("%d\n", strcmp(string1, string2));
	printf("%d\n", strcmp(string1, string3));
	printf("%d\n", strcmp("abcdefg", "abcdefz"));
}

