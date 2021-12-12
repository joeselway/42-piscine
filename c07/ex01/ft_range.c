/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 17:41:22 by exam              #+#    #+#             */
/*   Updated: 2021/12/10 18:09:41 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int i;
	int p;
	int size;
	int *ptr;

	p = 0;
	size = end - start;
	if (size < 0)
		size*= -1;
	size++;
	ptr = malloc(sizeof(i) * size);
	if (start <= end)
	{
		i = start;
		while (i <= end)
		{
			ptr[p] = i;
			i++;
			p++;	
		}
	}
	else
	{
		i = start;
		while (i >= end)
		{
			ptr[p] = i;
			i--;
			p++;
		}
	}
	return (ptr);
}

#include <stdio.h>

int	main(void)
{
	int a;
	int b;
	int i;

	a = -6660;
	b = 0;
	i = 0;
	
	int size = b - a;
	if (size < 0)
		size *= -1;
	size++;
	printf("Creating array from %d to %d, size is %d\n", a, b, size);
	printf("ft_range start\n");
	int *start = ft_range(a, b);
	printf("ft_range done\n");
	while (i < size)
	{
		printf("%d\n", start[i]);
		i++;
	}
}

