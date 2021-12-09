/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jselway <jselway@student.42adel.org.au>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 21:40:28 by jselway           #+#    #+#             */
/*   Updated: 2021/12/09 21:54:15 by jselway          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	result = nb * nb;
	power--;
	while (power > 1)
	{
		result = result * nb;
		power--;
	}
	return (result);
}

#include <stdio.h>

int	main(void)
{
	printf("The result is: %d\n", ft_iterative_power(2, 4));
	printf("The result is: %d\n", ft_iterative_power(0, 4));
	printf("The result is: %d\n", ft_iterative_power(-2, 3));
}
