/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jselway <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 17:30:55 by jselway           #+#    #+#             */
/*   Updated: 2021/12/06 17:31:08 by jselway          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char string[] = "12345678901234qwertyUIOPasdfghjklzxcvbnm1234567890";
	//char new[50];
	printf("Before: %s\n", string);
	//char *copy = ft_strncpy(&new[0], &string[0], 12);
	printf("After: %s\n", ft_strlowcase(string));
}
*/
