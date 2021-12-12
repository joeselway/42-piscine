/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jselway <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 14:48:48 by jselway           #+#    #+#             */
/*   Updated: 2021/12/12 15:44:19 by jselway          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	if (nb < 0)
		return (0);
	i = 1;
	while (i < 46431 && i * i < nb)
		i++;
	if (i * i == nb)
		return (i);
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	int	i = 2147395599;
	int r;
	while (i < 2147483647)
	{
		r = ft_sqrt(i);
		(printf("The sqrt of %d is %d\n", i, r));
		i++;
	}
}
*/
