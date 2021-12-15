/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
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
