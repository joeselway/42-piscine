/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jselway <jselway@student.42adel.org.au>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 12:18:06 by jselway           #+#    #+#             */
/*   Updated: 2021/12/13 23:32:22 by jselway          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*copy;

	len = 0;
	i = 0;
	while (src[len])
		len++;
	copy = malloc(sizeof(src[0]) * (len + 1));
	if (copy)
	{
		while (src[i])
		{
			copy[i] = src[i];
			i++;
		}
		copy[i] = '\0';
	}
	return (copy);
}
/*
#include <stdio.h>
#include <strings.h>

int	main(void)
{
	char *string = "12345678901234qwertyuiopasdfghjklzxcvbnm1234567890";
	//char new[60];
	//printf("Source length is %lu\n", strlen(string));
	//printf("Dest'n length is %lu\n", strlen(new));
	printf("Original: %s\n", string);
	printf("Address:  %p\n", string);
	char *copy = ft_strdup(string);
	printf("Copy:     %s\n", copy);
	printf("Address:  %p\n", copy);
	char *str = ft_strdup("");
	printf("Copy of nothing: %s\n", str);
}
*/
