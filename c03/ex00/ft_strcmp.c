/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jselway <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 21:55:42 by jselway           #+#    #+#             */
/*   Updated: 2021/12/06 22:13:06 by jselway          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i])
		i++;
	return (s1[i] - s2[i]);
}

#include <stdio.h>

int	main(void)
{
	char	string1[] = "abcdefghjkl";
	char	string2[] = "adcdefghjka";
	char	string3[] = "abcdefghjkz";
	printf("%d\n", ft_strcmp(string1, string2));
	printf("%d\n", ft_strcmp(string1, string3));
}
