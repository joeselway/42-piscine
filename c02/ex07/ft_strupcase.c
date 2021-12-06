/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jselway <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 16:57:33 by jselway           #+#    #+#             */
/*   Updated: 2021/12/06 17:31:31 by jselway          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char string[] = "12345678901234qwertyuiopasdfghjklzxcvbnm1234567890";
	//char new[50];
	printf("Before: %s\n", string);
	//char *copy = ft_strncpy(&new[0], &string[0], 12);
	printf("After: %s\n", ft_strupcase(string));
}
*/
