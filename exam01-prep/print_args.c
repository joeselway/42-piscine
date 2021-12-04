/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jselway <jselway@student.42adel.org.au>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 12:43:09 by jselway           #+#    #+#             */
/*   Updated: 2021/12/04 12:36:44 by jselway          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *c)
{
	int i;

	i = 0;	
	while (c[i] != '\0')
	{
		ft_putchar(c[i]);
		//write(1, c, 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int i;

	i = 0;
	ft_putchar('4');
	ft_putchar('2');
	ft_putchar('\n');
	ft_putstr("The program is begin\n");
	if ( argc == 0 )
		return (1);
	while (++i <= argc) // increment to 1 which is the first arguments index and loop
	{
		if ( i == argc) // if we have reached the last one (index = argc), print it
		{
			ft_putstr(argv[i]); // use ft_putstr to print from array index numbered "i"
		}
	}
	return (0);
}
