/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jselway <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 18:10:20 by jselway           #+#    #+#             */
/*   Updated: 2021/12/15 14:44:59 by jselway          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;

	size = max - min;
	if (size < 1)
	{
		*range = 0;
		return (0);
	}
	*range = malloc(sizeof(size) * size);
	if (*range == 0)
		return (-1);
	i = 0;
	while (i < size)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (size);
}
/*
#include <stdio.h>

int	main(void)
{
	int a;
	int b;
	int i;
	int *range;
	//int **ptr = &range;
	int size;

	a = -10;
	b = 25;
	i = 0;

	printf("Creating array from %d to %d, size should be %d\n", a, b, b - a);
	printf("ft_ultimate_range start\n");
	size  = ft_ultimate_range(&range, a, b);
	printf("ft_ultimate_range done, size is %d\n", size);
	while (i < size)
	{
		printf("%d\n", range[i]);
		i++;
	}
}
*/
