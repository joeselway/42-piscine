/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jselway <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 16:15:45 by jselway           #+#    #+#             */
/*   Updated: 2021/12/02 16:25:36 by jselway          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <stdlib.h>
*/
void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	i = 0;
	while (i < (size - 1))
	{
		if (tab[i] > tab[i + 1])
		{
			swap = tab[i + 1];
			tab[i + 1] = tab[i];
			tab[i] = swap;
			i = 0;
		}
		else
			i++;
	}
}
/*
int	main(void)
{
	int length = 25;
	int	array[length];
	int i = 0;
	while (i < length)
	{
		array[i] = rand() % 99;
		i++;
	}
	i = 0;
	while (i < length)
	{
		printf("%d, ", array[i]);
		i++;
	}
	printf("\n");
	ft_sort_int_tab(&array[0], i);
	i = 0;
	while (i < length)
	{
		printf("%d, ", array[i]);
		i++;
	}
}
*/
