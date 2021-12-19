/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jselway <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 14:56:08 by jselway           #+#    #+#             */
/*   Updated: 2021/12/19 15:33:25 by jselway          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}

void	ft_putnbr(int nb)
{
	long int	nbl;
	int			div;
	int			mod;
	char		modchar;

	nbl = nb;
	if (nbl < 0)
	{
		nbl = nbl * -1;
		write(1, "-", 1);
	}
	div = nbl / 10;
	mod = nbl % 10;
	if (div > 0)
	{
		ft_putnbr(div);
	}
	modchar = mod + 48;
	write(1, &modchar, 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	ft_putstr(par->str);
	ft_putnbr(par->size);
	write(1, "\n", 1);
	ft_putstr(par->copy);
}
