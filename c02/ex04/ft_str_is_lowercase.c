/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jselway <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 17:31:57 by jselway           #+#    #+#             */
/*   Updated: 2021/12/06 17:31:59 by jselway          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if ((*str < 97) || (*str > 122))
			return (0);
		str++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	char *string = "@abcz";
	printf("Original: %s\n", string);
	int res;
	res = ft_str_is_lowercase(string);
	printf("Result is %d\n", res);
	return (0);
}
*/
