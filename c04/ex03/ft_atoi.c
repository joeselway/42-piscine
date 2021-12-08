/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jselway <jselway@student.42adel.org.au>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 23:38:48 by jselway           #+#    #+#             */
/*   Updated: 2021/12/08 10:14:32 by jselway          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int n;
	int	sign;	

	n = 0;
	sign = 1;
	while(*str <= 32)
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = sign * -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		n = n * 10;
		n = n + (*str - 48);
		str++;
	}
	n = n * sign;
	return (n);
}


#include <stdio.h>

int	main(void)
{
	printf("Result is: %d\n", ft_atoi("  +--++-28543sfhsa2"));
}