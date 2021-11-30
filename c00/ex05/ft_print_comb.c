/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jselway <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 16:45:28 by jselway           #+#    #+#             */
/*   Updated: 2021/11/28 18:22:44 by jselway          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	abc[3];

	abc[0] = '0' - 1;
	while (++abc[0] <= '9')
	{
		abc[1] = abc[0] + 1 - 1;
		while (++abc[1] <= '9')
		{
			abc[2] = abc[1] + 1 - 1;
			while (++abc[2] <= '9')
			{
				write(1, &abc, 3);
				if (abc[0] != '7')
				{
					write(1, ",", 1);
					write(1, " ", 1);
				}
			}
		}
	}
}