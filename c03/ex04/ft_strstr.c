/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jselway <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 18:04:55 by jselway           #+#    #+#             */
/*   Updated: 2021/12/08 18:37:41 by jselway          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (0);
}
/*
#include <strings.h>
#include <stdio.h>

int	main(void)
{
	char haystack[] = "very horsey business in the fridges";
	char needle[] = "busi";
	printf("   strstr: %s\n",	strstr(haystack, needle));
	printf("ft_strstr: %s\n", ft_strstr(haystack,needle));
	printf("   strstr: %s\n",	strstr(haystack, ""));
	printf("ft_strstr: %s\n", ft_strstr(haystack,""));
	printf("   strstr: %s\n",	strstr(haystack, "needle"));
	printf("ft_strstr: %s\n", ft_strstr(haystack,"needle"));	
}
*/
