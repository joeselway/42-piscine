/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jselway <jselway@student.42adel.org.au>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 11:26:54 by jselway           #+#    #+#             */
/*   Updated: 2021/12/02 11:27:24 by jselway          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
void	ft_swap(int *a, int *b)
{
	if (*a == *b)
		return ;
	*a ^= *b;
	*b ^= *a;
	*a ^= *b;
}
/*
int	main(void)
{
	int a = 10;
	int b = 20;
	//int *z = &a;
	//int *y = &a;
	printf("a = %d, b = %d\n", a, b);
	ft_swap(&a, &b);
	printf("a = %d, b = %d\n", a, b);
}
*/
