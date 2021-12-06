/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jselway <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 17:38:27 by jselway           #+#    #+#             */
/*   Updated: 2021/12/06 18:14:45 by jselway          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	if (str[0])
		if (str[0] > 96 && str[0] < 123)
			str[0] = str[0] - 32;
	i = 1;
	while (str[i])
	{
	    if (str[i - 1] < 48 
		|| (str[i - 1] > 57 && str[i - 1] < 65) 
		|| (str[i - 1] > 90 && str[i - 1] < 97) 
		|| str[i - 1] > 122)
		{
			if (str[i] > 96 && str[i] < 123)
					str[i] = str[i] - 32;
		}
		else if (str[i] >=65 && str[i] <= 90)
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

#include <stdio.h>

int	main(void)
{
	char string[] = "12,34+aaa-bbb5678901234qwe rtyUI OPasdfghjkl zxcvbnm1234567890";
	//char new[50];
	printf("Before: %s\n", string);
	//char *copy = ft_strncpy(&new[0], &string[0], 12);
	printf("After: %s\n", ft_strcapitalize(string));
}

