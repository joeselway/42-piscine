/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_sort_int_tab.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: amonteli <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/07 18:48:18 by amonteli     #+#   ##    ##    #+#       */
/*   Updated: 2021/12/02 16:15:24 by jselway          ###   ########.fr       */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int		swap;
	int		count;

	count = 0;
	// Run the swap loop for the whole array length
	while (count < (size - 1))
	{
		// If the current array position's value is larger (sort ascending)
		// than the value stored in position index + 1, then:
		if (tab[count] > tab[count + 1])
		{
			// Swap positions
			swap = tab[count];
			tab[count] = tab[count + 1];
			tab[count + 1] = swap;
			// Reset the counter to the start of the array
			count = 0;
		}
		// If no swap required, move on
		else
			count++;
	}
}
