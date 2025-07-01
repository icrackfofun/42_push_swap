/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psantos- <psantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 14:00:01 by psantos-          #+#    #+#             */
/*   Updated: 2025/07/01 20:34:40 by psantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "push_swap.h"
#include "lib/libft.h"
#include <limits.h>

int	is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

int	is_sign(char c)
{
	return (c == '+' || c == '-');
}

int	str_check(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '+' || str[i] == '-')
		i++;
	if (!is_digit(str[i]))
		return (1);
	while (str[i])
	{
		if (!is_digit(str[i]))
			return (1);
		i++;
	}
	return (0);
}

int	has_duplicates(char **arr)
{
	int	i;
	int	j;
	int	val_i;
	int	val_j;

	i = 0;
	while (arr[i])
	{
		val_i = ft_atoi(arr[i]);
		j = i + 1;
		while (arr[j])
		{
			val_j = ft_atoi(arr[j]);
			if (val_i == val_j)
			{
				write(2, "Error\n", 6);
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

void	arg_check(char **av)
{
	int	i;

	i = 0;
	while (av[i])
	{
		if (str_check(av[i]) || ft_atoi(av[i]) < INT_MIN
			|| ft_atoi(av[i]) > INT_MAX)
		{
			write(2, "Error\n", 6);
			exit (1);
		}
		i++;
	}
	if (has_duplicates(av))
		exit (1);
}
