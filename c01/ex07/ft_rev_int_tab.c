/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jselway <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 15:46:41 by jselway           #+#    #+#             */
/*   Updated: 2021/12/02 16:03:03 by jselway          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	i = 0;
	while (i < (size / 2))
	{
		swap = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = swap;
		i++;
	}
}
/*
int	main(void)
{
	int length = 999;
	int	array[length];
	int i = 0;
	while (i < length)
	{
		array[i] = i+1;
		i++;
	}
	i = 0;
	while (i < length)
	{
		printf("%d, ", array[i]);
		i++;
	}
	printf("\n");
	ft_rev_int_tab(&array[0], i);
	i = 0;
	while (i < length)
	{
		printf("%d, ", array[i]);
		i++;
	}
}
*/
