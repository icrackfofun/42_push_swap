/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_structs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psantos- <psantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 21:48:38 by psantos-          #+#    #+#             */
/*   Updated: 2025/06/24 15:24:09 by psantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "push_swap.h"
#include "lib/libft.h"

void	create_stacks(char **arr, t_info *info)
{
	int	i;
	int	j;

	i = 0;
	while (arr[i])
		i++;
	info->a.stack = malloc(i * sizeof(int));
	info->b.stack = malloc(i * sizeof(int));
	if (!info->a.stack || !info->b.stack)
		exit(1);
	info->a.size = i;
	info->b.size = 0;
	i--;
	j = 0;
	while (i >= 0)
	{
		info->a.stack[j] = ft_atoi(arr[i]);
		i--;
		j++;
	}
}

void	init_info(int ac, char **av, t_info *info)
{
	info->arr = &av[1];
	info->must_free = 0;
	if (ac == 2)
	{
		info->arr = ft_split(av[1], ' ');
		if (!info->arr)
			exit (1);
		info->must_free = 1;
	}
	arg_check(info->arr);
	create_stacks(info->arr, info);
	if (info->must_free == 1)
	{
		free(info->arr);
		info->arr = NULL;
	}
}

void	free_info(t_info *info)
{
	int	i;

	i = 0;
	if (info->a.stack)
		free(info->a.stack);
	if (info->b.stack)
		free(info->b.stack);
	if (info->must_free && info->arr)
	{
		while (info->arr[i])
			free(info->arr[i++]);
		free(info->arr);
	}
}
