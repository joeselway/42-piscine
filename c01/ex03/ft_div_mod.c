/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jselway <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 15:47:07 by jselway           #+#    #+#             */
/*   Updated: 2021/12/01 17:18:01 by jselway          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int	main(void)
{
	int divideMeAndStoreQuotient = 5;
	int	divideByAndStoreRemainder = 2;
	printf("Dividing %d by %d…\n", divideMeAndStoreQuotient, divideByAndStoreRemainder);
	ft_div_mod(divideMeAndStoreQuotient, divideByAndStoreRemainder, &divideMeAndStoreQuotient, &divideByAndStoreRemainder);
	printf("The quotient is %d and the remainder is %d…\n", divideMeAndStoreQuotient, divideByAndStoreRemainder);
}
