/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jselway <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 21:42:59 by jselway           #+#    #+#             */
/*   Updated: 2021/12/06 21:43:00 by jselway          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if ((*str < 32) || (*str > 126))
			return (0);
		str++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	char *string = "\a";
	printf("Original: %s\n", string);
	int res;
	res = ft_str_is_printable(string);
	printf("Result is %d\n", res);
	return (0);
}
*/
