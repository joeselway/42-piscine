/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jselway <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 17:40:15 by jselway           #+#    #+#             */
/*   Updated: 2021/12/08 12:40:53 by jselway          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <strings.h>

int	main(void)
{
	char *string = "12345678901234qwertyuiopasdfghjklzxcvbnm1234567890";
	char new[60];
	printf("Source length is %lu\n", strlen(string));
	printf("Dest'n length is %lu\n", strlen(new));
	printf("Original: %s\n", string);
	char *copy = ft_strcpy(&new[0], &string[0]);
	printf("Copy: %s\n", copy);
}
*/
