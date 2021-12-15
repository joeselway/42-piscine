/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 17:41:22 by exam              #+#    #+#             */
/*   Updated: 2021/12/13 23:56:55 by jselway          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	size;
	int	*ptr;

	if (min >= max)
		return (NULL);
	size = max - min;
	ptr = malloc(sizeof(i) * size);
	i = 0;
	while (i < size)
	{
		ptr[i] = min + i;
		i++;
	}
	return (ptr);
}

#include <stdio.h>

int	main(void)
{
	int a;
	int b;
	int i;

	a = 495;
	b = 555;
	i = 0;
	
	int size = b - a;
	if (size < 0)
		size *= -1;
	printf("Creating array from %d to %d, size is %d\n", a, b, size);
	printf("ft_range min\n");
	int *min = ft_range(a, b);
	printf("ft_range done\n");
	while (i < size)
	{
		printf("%d\n", min[i]);
		i++;
	}
}

