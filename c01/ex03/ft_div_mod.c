/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jselway <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 15:47:07 by jselway           #+#    #+#             */
/*   Updated: 2021/12/02 11:32:43 by jselway          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int z = 5;
	int	y = 2;
	printf("Dividing %d by %d…\n", z, y);
	ft_div_mod(z, y, &z, &y);
	printf("The quotient is %d and the remainder is %d…\n", z, y);
}
*/
