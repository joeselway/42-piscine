/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
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

