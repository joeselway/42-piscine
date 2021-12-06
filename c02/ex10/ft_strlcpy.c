/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jselway <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 18:17:07 by jselway           #+#    #+#             */
/*   Updated: 2021/12/06 21:14:20 by jselway          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	i;
	int	s;

	i = 0;
	s = 0;
	while (src[s])
		s++;
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (s);
}
/*
#include <stdio.h>

int	main(void)
{
	char *string = "12345678901234qwertyuiopasdfghjklzxcvbnm1234567890";
	char new[20];
	printf("Original: %s\n", string);
	ft_strlcpy(&new[0], &string[0], 40);
	printf("Copy: %s\n", new);
}
*/
