/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jselway <jselway@student.42adel.org.au>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 16:38:37 by jselway           #+#    #+#             */
/*   Updated: 2021/12/16 16:49:03 by jselway          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	if (argc != 2) // "If the number of parameters is not 1."
	{
		write(1, "a\n", 2); // "…the program displays 'a' followed by a newline.
		return (0); 		// and end the program, we are done
	}

	i = 0;
	while (argv[1][i] != '\0')	// While looping the string at argv[1]
	{
		if (argv[1][i] == 'a')	// Check each character for an 'a'
		{
			write(1, "a\n", 2);	// If we find an 'a', write a and newline
			return (0);			// and end the program, we are done
		}
		i++;					// Keep looping the string
	}
	write(1, "\n", 1);	// If we have reached here, we have reached the loop
	return (0);			// end without finding an 'a' in the string.
}
