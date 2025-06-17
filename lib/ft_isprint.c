/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psantos- <psantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 14:49:52 by psantos-          #+#    #+#             */
/*   Updated: 2025/04/18 17:04:43 by psantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isprint(int c)
{
	if (c <= 31 || c >= 127)
		return (0);
	return (1);
}

/*int main (void)
{
    printf ("%i\n", isprint(-2));
    printf ("%i\n", ft_isprint(-2));
}*/