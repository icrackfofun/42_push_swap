/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psantos- <psantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 22:13:14 by psantos-          #+#    #+#             */
/*   Updated: 2025/04/18 22:40:02 by psantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	size_t	i;

	if (dstsize == 0)
		return (ft_strlen(src));
	i = 0;
	while (src[i] != '\0' && i < dstsize - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}

/*int main(void)
{
	char src[] = "Hello";
	char dest1[4];
	char dest2[4];

	printf("%zu\n", strlcpy(dest1, src, 3));
	printf("%zu\n", ft_strlcpy(dest2, src, 3));
	printf("%s\n", dest1);
	printf("%s\n", dest2);
}*/

//cc -Wall -Werror -Wextra ft_strlcpy.c -L. -lft