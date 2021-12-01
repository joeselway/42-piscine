/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jselway <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 17:48:09 by jselway           #+#    #+#             */
/*   Updated: 2021/12/01 17:55:36 by jselway          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int i;
	
	i = 0;
	while(str[i])
	{
		i++;
	}
	return i;
}

int	main(void)
{
	int	n = ft_strlen("Long string is how long is a long string");
	printf("The string is %d characters long", n);
	return(0);
}
