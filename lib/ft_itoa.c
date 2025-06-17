/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psantos- <psantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 15:14:17 by psantos-          #+#    #+#             */
/*   Updated: 2025/04/22 12:18:25 by psantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

static int	ft_numlen(long n)
{
	int	len;

	len = (n <= 0);
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long int	nb;
	char		*number;
	int			len;

	nb = n;
	len = ft_numlen(nb);
	number = (char *)ft_calloc(len + 1, 1);
	if (!number)
		return (NULL);
	if (nb < 0)
	{
		number[0] = '-';
		nb = -nb;
	}
	if (nb == 0)
		number[0] = '0';
	while (nb > 0)
	{
		number[--len] = (nb % 10) + '0';
		nb /= 10;
	}
	return (number);
}

/*int	main(void)
{
	int	test_values[] = {
		0,
		1,
		-1,
		42,
		-42,
		2147483647,      // INT_MAX
		-2147483648,     // INT_MIN
		1000000000,
		-1000000000
	};
	int num_tests = sizeof(test_values) / sizeof(int);

	for (int i = 0; i < num_tests; i++)
	{
		char *result = ft_itoa(test_values[i]);
		if (result)
		{
			printf("ft_itoa(%d) = \"%s\"\n", test_values[i], result);
			free(result);
		}
		else
		{
			printf("ft_itoa(%d) = NULL (malloc failed)\n", test_values[i]);
		}
	}
	return 0;
}*/