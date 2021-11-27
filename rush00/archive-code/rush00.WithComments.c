void	ft_putchar(char c);

int	rush(int x, int y)
{	
	if ( x < 1 || y < 1) //no negatives or zeroes plz
	{
		return(1);
	}

	int ycounter; //vertical length - horizontal iterations (rows)
	int xcounter; //horizontal width - vertical iterations (columns)
	
	ycounter = 1; //iterates rows down the screen
	xcounter = 1; //iterates columns across the screen

	while( ycounter <= y )
	{
		if((ycounter == 1) || (ycounter == y))
		{
			while(xcounter <= x)
			{
				if((xcounter == 1) || (xcounter == x)) { ft_putchar('o'); }
				else { ft_putchar('-'); }
				xcounter++;
			}
		}
		else
		{
			while(xcounter <= x)
			{
				if((xcounter == 1) || (xcounter == x)) { ft_putchar('|');	}
				else { ft_putchar(' '); }
				xcounter++;
			}
		}
		ft_putchar('\n');
		xcounter = 1;
		ycounter++;
	}
	return(0);
}
