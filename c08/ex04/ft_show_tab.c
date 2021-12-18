/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
<<<<<<< HEAD
/*   By: jselway <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 14:56:08 by jselway           #+#    #+#             */
/*   Updated: 2021/12/15 14:59:06 by jselway          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(*str)
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
	
}

void	ft_show_tab(struct s_stock_str *par)
{
	ft_putstr(s_stock_str.str);
	ft_putnbr(s_stock_str.size);
	ft_putstr(s_stock_str.copy);
}
=======
/*   By: jselway <jselway@student.42adel.org.au>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 18:33:53 by jselway           #+#    #+#             */
/*   Updated: 2021/12/16 11:32:45 by jselway          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_show_tab(struct s_stock_str *par)
{
	ft_putstr(par.str);
	ft_putnbr(par.size);
	ft_putstr(par.copy);

>>>>>>> 6b0cb5bb01ee74b88878fe893a4e9ba6893e67a5
