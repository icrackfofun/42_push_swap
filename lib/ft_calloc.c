/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psantos- <psantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 20:26:42 by psantos-          #+#    #+#             */
/*   Updated: 2025/04/22 12:18:51 by psantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*c;
	size_t	total_size;

	total_size = nmemb * size;
	if (size && (total_size / size != nmemb))
		return (NULL);
	c = (void *)malloc(total_size);
	if (!c)
		return (NULL);
	ft_bzero(c, total_size);
	return (c);
}

/*int	main(void)
{
	// Normal allocation
	void *std1 = calloc(5, sizeof(int));
	void *ft1 = ft_calloc(5, sizeof(int));

	int match1 = memcmp(std1, ft1, 5 * sizeof(int)) == 0;
	printf("✅ Zeroed memory matches: %s\n", match1 ? "yes" : "no");

	// nmemb = 0
	void *std2 = calloc(0, sizeof(int));
	void *ft2 = ft_calloc(0, sizeof(int));

	printf("✅ calloc(0, size): both non-NULL or NULL -> %s\n",
		((std2 == NULL && ft2 == NULL) || (std2 && ft2)) ? "yes" : "no");

	// size = 0
	void *std3 = calloc(10, 0);
	void *ft3 = ft_calloc(10, 0);

	printf("✅ calloc(nmemb, 0): both non-NULL or NULL -> %s\n",
		((std3 == NULL && ft3 == NULL) || (std3 && ft3)) ? "yes" : "no");

	// Both 0
	void *std4 = calloc(0, 0);
	void *ft4 = ft_calloc(0, 0);

	printf("✅ calloc(0, 0): both non-NULL or NULL -> %s\n",
		((std4 == NULL && ft4 == NULL) || (std4 && ft4)) ? "yes" : "no");

	// Free all
	free(std1); free(ft1);
	free(std2); free(ft2);
	free(std3); free(ft3);
	free(std4); free(ft4);

	return 0;
}*/