/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jselway <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 17:40:15 by jselway           #+#    #+#             */
/*   Updated: 2021/12/02 22:02:51 by jselway          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	char	*c;

	c = dest;
	while (*src)
	{
		*c = *src;
		c++;
		src++;
	}
	return (dest);
}

/*

#include <stdio.h>

int	main(void)
{
	char *string = "12345678901234qwertyuiopasdfghjklzxcvbnm1234567890";
	char new[50];
	printf("Original: %s\n", string);
	char *copy = ft_strcpy(&new[0], &string[0]);
	printf("Copy: %s\n", copy);
}

*/
