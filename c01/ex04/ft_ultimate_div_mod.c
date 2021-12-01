/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jselway <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 17:27:00 by jselway           #+#    #+#             */
/*   Updated: 2021/12/01 17:33:47 by jselway          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int temp;
	temp = *a / *b;
	*b = *a % *b;
	*a = temp;
}

int	main(void)
{
	int divideMeAndStoreQuotient = 21;
	int	divideByAndStoreRemainder = 5;
	printf("Dividing %d by %d…\n", divideMeAndStoreQuotient, divideByAndStoreRemainder);
	ft_ultimate_div_mod(&divideMeAndStoreQuotient, &divideByAndStoreRemainder);
	printf("The quotient is %d and the remainder is %d…\n", divideMeAndStoreQuotient, divideByAndStoreRemainder);
}
