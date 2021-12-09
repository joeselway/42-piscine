/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jselway <jselway@student.42adel.org.au>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 01:25:03 by jselway           #+#    #+#             */
/*   Updated: 2021/12/09 21:38:52 by jselway          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	i;
	int	result;

	i = 0;
	result = 1;	

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
	printf("Result is: %d\n", ft_recursive_factorial(4));
}
*/	
