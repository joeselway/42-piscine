/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jselway <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 13:55:25 by jselway           #+#    #+#             */
/*   Updated: 2021/12/06 13:56:06 by jselway          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	while (*str)
	{
		if ((*str < 48) || (*str > 57))
			return (0);
		str++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	char *string = "";
	printf("Original: %s\n", string);
	int res;
	res = ft_str_is_numeric(string);
	printf("Result is %d\n", res);
	return (0);
}
*/
