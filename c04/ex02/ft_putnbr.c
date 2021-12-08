/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jselway <jselway@student.42adel.org.au>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 22:29:51 by jselway           #+#    #+#             */
/*   Updated: 2021/12/08 18:53:01 by jselway          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	int		div;
	int		mod;
	char	modchar;

	if (nb < 0)
	{
		nb = nb * -1;
		write(1, "-", 1);
	}
	div = nb / 10;
	mod = nb % 10;
	if (div > 0)
	{
		ft_putnbr(div);
	}
	modchar = mod + 48;
	write(1, &modchar, 1);
}
/*
int	main(void)
{
	ft_putnbr(-1234254987);
}
*/
