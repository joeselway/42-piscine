/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jselway <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 21:59:18 by jselway           #+#    #+#             */
/*   Updated: 2021/12/02 22:17:03 by jselway          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;
	char	*c;

	c = src*;
	i = 0;
	while (src[i] < n && i < n)
	{
		dest[i] = src[i];
		++i;
	}
	while (i < n)
	{
		dest[i] = '\0';
		++i;
	}
	return (dest);
}

#include <stdio.h>

int	main(void)
{
	char *string = "12345678901234qwertyuiopasdfghjklzxcvbnm1234567890";
	char new[50];
	printf("Original: %s\n", string);
	char *copy = ft_strncpy(&new[0], &string[0], 25);
	printf("Copy: %s\n", copy);
}

