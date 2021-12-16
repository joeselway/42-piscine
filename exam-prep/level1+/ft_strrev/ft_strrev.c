/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jselway <jselway@student.42adel.org.au>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 17:16:08 by jselway           #+#    #+#             */
/*   Updated: 2021/12/15 17:22:56 by jselway          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int	i;
	int	strlen;
	char swap;

	strlen = 0;
	while (str[strlen])
		strlen++;
	i = 0;
	while (i < (strlen / 2))
	{
		swap = str[i];
		str[i] = str[strlen - i - 1]; // length -1 for index of last char
		str[strlen - i - 1] = swap;
		i++;
	}
	return (str);
}

#include <stdio.h>

int	main(void)
{
	char string[] = "1234567890qwerty";
	ft_strrev(string);
	printf("%s\n", string);
}

