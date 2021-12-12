/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jselway <jselway@student.42adel.org.au>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 21:40:28 by jselway           #+#    #+#             */
/*   Updated: 2021/12/12 15:05:14 by jselway          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	if (power < 0)
		return (0);
	result = 1;
	while (power > 0)
	{
		result = result * nb;
		power--;
	}
	return (result);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("The result is: %d\n", ft_iterative_power(-4, -2));
	printf("The result is: %d\n", ft_iterative_power(-4, 0));
	printf("The result is: %d\n", ft_iterative_power(-4, 1));
	printf("The result is: %d\n", ft_iterative_power(0, 0));
	printf("The result is: %d\n", ft_iterative_power(1, 4));
	printf("The result is: %d\n", ft_iterative_power(2, 3));
	printf("The result is: %d\n", ft_iterative_power(2, 4));
	printf("The result is: %d\n", ft_iterative_power(2, 1));
	printf("The result is: %d\n", ft_iterative_power(5, 3));
}
*/
