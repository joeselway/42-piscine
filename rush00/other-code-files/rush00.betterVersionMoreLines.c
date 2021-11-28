/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jselway <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 11:58:28 by jselway           #+#    #+#             */
/*   Updated: 2021/11/27 12:28:26 by jselway          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	rush(int x, int y)
{	
	int	ycounter;
	int	xcounter;

	if (x < 1 || y < 1)
		return (1);
	ycounter = 1;
	xcounter = 1;
	while (ycounter <= y)
	{
		if ((ycounter == 1) || (ycounter == y))
		{
			while (xcounter <= x)
			{
				if ((xcounter == 1) || (xcounter == x)) {ft_putchar('o');}
				else
					ft_putchar('-');
				xcounter++;
			}
		}
		else
		{
			while (xcounter <= x)
			{
				if ((xcounter == 1) || (xcounter == x)) 
					ft_putchar('|');
				else 
					ft_putchar(' ');
				xcounter++;
			}
		}
		ft_putchar('\n');
		xcounter = 1;
		ycounter++;
	}
	return(0);
}
