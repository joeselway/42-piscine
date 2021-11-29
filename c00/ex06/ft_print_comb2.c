/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jselway <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 18:21:39 by jselway           #+#    #+#             */
/*   Updated: 2021/11/29 15:32:35 by jselway          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	/* Set up two arrays of two characters that will count up to 9 each */
	int	first[2];
	int second[2];
	
	/* Initialise variables to character 0 minus 1 so that we start on character 0 with first increment
	first[0] = "0" - 1
	first[1] = "0" - 1
	/* Loop for first digit of first pair */
	while (++first[0] < '9')
	{
		/* Loop for second digit of first pair */
		while (++first[1] < '9')
		{
			/* Loop for first digit of second pair */
			while(++second[0] < '9')
			{
				/* Loop for second digit of second pair */
				while(++second[1] < '9')
				{
					write(1, &first[0], 2);
					write(1, " ", 1);
					write(1, &second[0], 2);
					if 


