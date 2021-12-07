/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jselway <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 15:56:25 by jselway           #+#    #+#             */
/*   Updated: 2021/12/07 16:06:32 by jselway          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	dlen;
	unsigned int	i;
	dlen = 0;

	while (dest[dlen])
		dlen++;
	while (src[i++] && i < nb)
	{
		dest[dlen + i - 1] = src[i];
		i++;
	}
	dest[dlen + i - 1] = '\0';
	return (dest);
}

#include <stdio.h>
#include <strings.h>

int	main(void)
{
	char string1[99] = "blah the string is blah";
	char string2[] = "also more blag blag blag";
	printf("String 1: %s\n", string1);
	printf("String 2: %s\n", string2);	
	ft_strncat(string1, string2, 15);
	printf("Result of ft_strncat: %s\n", string1);
   	char string3[99] = "blah the string is blah";
	strncat(string3, string2, 15);
	printf("Result of    strncat: %s\n", string1);
}
