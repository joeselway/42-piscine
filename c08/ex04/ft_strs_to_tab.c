/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jselway <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 20:48:11 by jselway           #+#    #+#             */
/*   Updated: 2021/12/19 15:35:02 by jselway          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*result;

	result = malloc(sizeof(*result) * ac + 1);
	i = 0;
	while (i < ac)
	{
		result[i].size = ft_strlen(av[i]);
		result[i].str = malloc(sizeof(av[i][0]) * (result[i].size + 1));
		result[i].copy = malloc(sizeof(av[i][0]) * (result[i].size + 1));
		ft_strcpy(result[i].str, av[i]);
		ft_strcpy(result[i].copy, av[i]);
		i++;
	}
	result[i].str = 0;
	result[i].size = 0;
	result[i].size = 0;
	return (result);
}
/*
int	main(int ac, char **av)
{
	int i;

	i = 0;
	struct s_stock_str *struct_array;
	struct_array = ft_strs_to_tab(ac, av);
	while (i < ac)
	{
		ft_show_tab(&struct_array[i]);
		i++;
	}
}
*/
