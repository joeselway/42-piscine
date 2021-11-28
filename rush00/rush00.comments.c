/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jselway <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 11:58:28 by jselway           #+#    #+#             */
/*   Updated: 2021/11/28 15:19:52 by jselway          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Because we will build our program with "gcc main.c ftputchar.c rush00.c", 
// We don't need to #include anything, 
// but we still need to prototype any function used inside this .c file
void	ft_putchar(char c);

// We are declaring a function:
// that returns an integer
	// that is called "rush"
		// and receives two integers called "x" and "y" as parameters
int	rush(int x, int y)
{	
	// Declare two more integers to use for loop counters
	int	yc;
	int	xc;
	
	// Check for zero (which won't print anything), or a negative number.
	// Exit function and return 1 for main exit status if check fails.
	if (x < 1 || y < 1)
		return (1);
	//Initialise the counters for incrementing towards x and y
	yc = 0;
	xc = 0;
	//Start looping rows, counting with yc between 1 and the max which is y
	while (++yc <= y)
	{
	// If above is true, we are inside the outer loop for rows
		while (++xc <= x)
		// If above is true, we are executing the inner loop for printing characters
		{
			// If we are in the first OR the last column,
			// AND
			// We are on the first OR the last row,
			// then print 'o'
			
			if ((xc == 1 || xc == x) && (yc == 1 || yc == y))
				ft_putchar('o');

			// If we are in the first OR the last row,
			// AND
			// We are in between the first column and the last column,
			// then print -
			else if ((yc == 1 || yc == y) && (xc > 1 && xc < x))
				ft_putchar('-');
			
			// If we are in the first OR the last column,
			// AND
			// We are in between the first row and the last row
			// then print |
			else if ((xc == 1 || xc == x) && (yc > 1 && yc < y))
				ft_putchar('|');
			
			// If nothing else is true just put a space!
			else
				ft_putchar(' ');
		}
		// If we have reached this point, the inner loop has broken 
		// because xc is greater than x
		// Thereforce, reset x, ready for printing another row from the start
		xc = 0;
		// and print a newline character to move us onto a new line for the next row
		ft_putchar('\n');
	}
	// If we have reached this point, the outer loop has broken
	// because yc is greater than y
	// We are done printing rows! We can exit the function and return a 0
	// This 0 means that the function didn't have an error! 
	return (0);
}
