/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jselway <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 12:27:00 by jselway           #+#    #+#             */
/*   Updated: 2021/12/06 13:31:12 by jselway          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if (( *str < 65) || ((*str > 90) && (*str < 97)) || (*str > 122))
			return (0);
		str++;
	}
return (1);
}

#include <stdio.h>

int	main(void)
{
	char *string = "a1";
	printf("Original: %s\n", string);
	int res;
	res = ft_str_is_alpha(string);
	printf("Result is %d\n", res);
	return (0);
}
