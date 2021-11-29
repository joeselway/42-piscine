/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 20:50:50 by agaliste          #+#    #+#             */
/*   Updated: 2021/11/28 16:56:24 by jselway          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char	first;
	char	second;
	char	third;

	// Initialise first to 1 less that starting value due to ++first in loop condition
	first = '0' - 1;
	// Loop for first number from 0 through to 9
	while (++first <= '9')
	{
		// Set second to first, which will become one more than first when the ++second hits
		second = first;
		// Loop for second digit values
		while (++second <= '9')
		{
			// Set third to one greater than second (e.g. 001)
			third = second + 1;
			// Loop for third value check
			while (third <= '9')
			{
				// print numbers
				ft_putchar(first);
				ft_putchar(second);
				ft_putchar(third);
				// …followd by comma space unless last value
				if (first != '7' || second != '8' || third != '9')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				third++;
			}
		}
	}
}
