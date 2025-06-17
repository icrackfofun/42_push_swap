/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psantos- <psantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 16:08:21 by psantos-          #+#    #+#             */
/*   Updated: 2025/04/22 12:42:19 by psantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

void	*ft_memset(void *ptr, int value, size_t num)
{
	size_t			i;
	unsigned char	*p;

	p = (unsigned char *)ptr;
	i = 0;
	while (i < num)
	{
		p[i] = value;
		i++;
	}
	return (ptr);
}

/*int main()
{
    size_t size = 10;
    char *buf1 = malloc(size);
    char *buf2 = malloc(size);

    if (!buf1 || !buf2)
    {
        perror("malloc failed");
        return 1;
    }
    ft_memset(buf1, 'A', size);
    memset(buf2, 'A', size);

    for (size_t j = 0; j < size; j++)
    {
        printf("%c %c\n", buf1[j], buf2[j]);
    }

    // Compare results
    int result = memcmp(buf1, buf2, size);
    printf("Comparison result: %s\n", result == 0 ? "MATCH" : "DIFFERENT");
    
    free(buf1);
    free(buf2);
    return 0;
}*/
