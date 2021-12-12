/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jselway <jselway@student.42adel.org.au>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 21:48:33 by jselway           #+#    #+#             */
/*   Updated: 2021/12/12 15:17:18 by jselway          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	result;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	result = nb;
	while (power > 0)
	{
		power--;
		result = nb * ft_recursive_power(nb, power);
		return (result);
	}
	return (result);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("The result is: %d\n", ft_recursive_power(-4, -2));
	printf("The result is: %d\n", ft_recursive_power(-4, 0));
	printf("The result is: %d\n", ft_recursive_power(-4, 1));
	printf("The result is: %d\n", ft_recursive_power(0, 0));
	printf("The result is: %d\n", ft_recursive_power(1, 4));
	printf("The result is: %d\n", ft_recursive_power(2, 3));
	printf("The result is: %d\n", ft_recursive_power(2, 4));
	printf("The result is: %d\n", ft_recursive_power(2, 1));
	printf("The result is: %d\n", ft_recursive_power(5, 3));
}
*/
