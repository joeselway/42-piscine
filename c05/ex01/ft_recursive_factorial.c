/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jselway <jselway@student.42adel.org.au>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 01:25:03 by jselway           #+#    #+#             */
/*   Updated: 2021/12/12 14:50:11 by jselway          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		nb--;
		result = (nb + 1) * ft_recursive_factorial(nb);
		return (result);
	}
	return (result);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("Result is: %d\n", ft_recursive_factorial(-1));
	printf("Result is: %d\n", ft_recursive_factorial(0));
	printf("Result is: %d\n", ft_recursive_factorial(1));
	printf("Result is: %d\n", ft_recursive_factorial(2));
	printf("Result is: %d\n", ft_recursive_factorial(3));
	printf("Result is: %d\n", ft_recursive_factorial(4));
}
*/	
