/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_z.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jselway <jselway@student.42adel.org.au>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 16:53:58 by jselway           #+#    #+#             */
/*   Updated: 2021/12/16 17:37:55 by jselway          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Unlike aff_a, this is a trick question! 
	Read it carefully - the result is ALWAYS to write z!!!
*/

#include <unistd.h>

int	main(void)	// Because we don't need to use our args, void is fine
{
	write(1, "z\n", 2);	// aff_z is really only_z, but with a newline
	return (0);		// We don't strictly need this, but main should return
}
