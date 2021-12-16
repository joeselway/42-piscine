/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jselway <jselway@student.42adel.org.au>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 16:02:59 by jselway           #+#    #+#             */
/*   Updated: 2021/12/16 16:03:59 by jselway          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int i;

	if (argc < 2) // Subject says to write newline only if less than one arg
	{	
		write(1, "\n", 1);
		return (0);
	}

	i = 0;
	while (argv[1][i]) // Do a putstr on argv[1] 
	{
		write(1, &argv[argc - 1][i], 1);
		i++;
	}
}
/* Note how this is really just a glorified putstr program! */
/*
void	ft_putstr(char	*str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}
*/
