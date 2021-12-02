/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jselway <jselway@student.42adel.org.au>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 11:44:06 by jselway           #+#    #+#             */
/*   Updated: 2021/12/02 12:26:04 by jselway          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	position;
	int	revtab[size];

	position = size - 1;
	i = 0 - 1;
	while (++i <= size)
	{
		revtab[i] = tab[position];
		position--;
	}
	i = 0;
	while (i < size)
	{
		printf("%d, ", revtab[i]);
		i++;
	}	
	printf("^^^ revtab array\n");
	i = 0;
	while (i < size)
	{	
		tab[i] = revtab[i];
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
