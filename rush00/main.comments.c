/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jselway <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 11:58:07 by jselway           #+#    #+#             */
/*   Updated: 2021/11/28 15:19:49 by jselway          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Because we will build our program with "gcc main.c ftputchar.c rush00.c", 
// We don't need to #include anything, 
// but we still need to prototype any function used inside this .c file
int	rush(int x, int y);

// We are declaring our main function, 
// which needs to exist for us to compile a program
// which needs to always return an integer known as the "exit status",
// which is either 0 for: no error, or 1 for: there was an error.
int	main(void)
{
	// We are declaring an integer to return the exit status from
	// the rush function, because main will be modified by 
	// Moulinette.
	// (We didn't need to do this for the assignment.
	// It's just good practice to end your program 
	// with the "correct" exit status.)
	int	exit;

	// Run the rush function with the input parameters of x and y,
	// storing the return value in the variable called "exit"
	exit = rush(3, 3);
	// Depending on the exit status of the rush function,
	// return the same exit status to the operating system
	if (exit > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
