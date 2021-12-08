/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jselway <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 13:56:00 by jselway           #+#    #+#             */
/*   Updated: 2021/12/08 18:36:21 by jselway          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	dlen;
	int	i;

	dlen = 0;
	while (dest[dlen])
		dlen++;
	i = 0;
	while (src[i])
	{	
		dest[dlen + i] = src[i];
		i++;
	}
	dest[dlen + i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <strings.h>

int	main(void)
{
	char string1[90] = "blah the string is blah";
	char string2[] = "also more blag blag blag";
	printf("String 1: %s\n", string1);
	printf("String 2: %s\n", string2);	
	ft_strcat(string1, string2);
	printf("Result of ft_strcat: %s\n", string1);
   	char string3[50] = "blah the string is blah";
	strcat(string3, string2);
	printf("Result of    strcat: %s\n", string1);
}
*/
