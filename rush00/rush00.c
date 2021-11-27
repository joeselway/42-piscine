/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jselway <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 11:58:28 by jselway           #+#    #+#             */
/*   Updated: 2021/11/27 12:59:19 by jselway          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	rush(int x, int y)
{	
	int	yc;
	int	xc;

	if (x < 1 || y < 1)
		return (1);
	yc = 0;
	xc = 0;
	while (++yc <= y)
	{
		while (++xc <= x)
		{
			if ((xc == 1 || xc == x) && (yc == 1 || yc == y))
				ft_putchar('o');
			else if ((yc == 1 || yc == y) && (xc > 1 && xc < x))
				ft_putchar('-');
			else if ((xc == 1 || xc == x) && (yc > 1 && yc < y))
				ft_putchar('|');
			else
				ft_putchar(' ');
		}
		xc = 0;
		ft_putchar('\n');
	}
	return (0);
}
